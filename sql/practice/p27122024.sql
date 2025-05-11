CREATE DATABASE IF NOT EXISTS p27122024;

USE p27122024;

show tables;

drop table student;

create table student(
    id int primary key,
    name varchar(50),
    age int
);

insert into student
(id,name,age)
values
(1,'akshat',null),
(2,'arav',14),
(3,'ram',null),
(4,'raghav',16),
(5,'piyush',12),
(6,'priya',18),
(7,'priyank',null);

select * from student;

-- create a trigger if you forgot to add age then add info and a message in message table

create table message_table(
    id int ,
    message varchar(50)
);


delimiter //
create trigger age_forget
after insert
on student
for each row
begin
if
new.age is null
then
insert into message_table
(id,message)
values
(new.id,'please! add age of student');
end if;
end; //


select * from message_table;





