use triggersDB;

-- student table is already exists in this database


create table employee(
id int auto_increment,
name varchar(30),
city varchar(30),
primary key (id)
);


create table message_table(
sr_no int auto_increment,
emp_id int,
message varchar(50),
primary key(sr_no)
);

-- creating a trigger generate_message if you forgot to fill city
--  then in message table enter details of that employee and a message

delimiter //
create trigger generate_message
after insert
on employee
for each row
begin
if new.city is null then
insert into message_table
(message,emp_id)
values
(concat('please fill city for ',new.name),new.id);
end if;
end; //

-- you can drop trigger as -->  drop trigger generate_message;

insert into employee
(id,name,city)
values
(1,'rohan','jamalpur'),
(2,'ayush','hanumangarh'),
(3,'ashish',null),
(4,'prince','lukhnow'),
(5,'priyank',null);


select * from employee;

select * from message_table;