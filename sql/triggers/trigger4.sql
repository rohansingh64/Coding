use triggersDB;

-- student , employee and message table is already exists in this database



--  before delete trigger


--  let say i want to store id and name and city details of those employee
--   who left company (whose data is being deleted)

show tables;

drop table if exists past_employee_info;

create table past_employee_info(
id int,
name varchar(30),
city varchar(30),
left_time date
);

delimiter //
create trigger store_past_emp
before delete
on employee
for each row
begin
insert into past_employee_info
(id,name,city,left_time)
values
(old.id,old.name,old.city,now());
end; //

drop trigger store_past_emp;

select * from employee;

delete from employee
where name = 'prince';

select * from past_employee_info;
