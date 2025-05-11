create database triggersDB;

use triggersDB;

show tables;

create table student(
id int auto_increment,
name varchar(20),
age int,
primary key (id)
);

drop table student;

-- creating a trigger which change student age less than 0 to age 0
-- before insert type

delimiter //
create trigger age_insert_correct
before insert
on student
for each row
begin
if new.age < 0 then set new.age = 0;
end if;
end;//

insert into student
(id,name,age)
values
(1,'aditya',7),
(2,'arav',-3),
(3,'babil',-7),
(4,'imran',1);

select * from student;

