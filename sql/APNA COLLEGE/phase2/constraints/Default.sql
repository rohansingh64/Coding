create database defaultDB;
use defaultDB;

create table workerDetails(
id int,
name varchar(50),
age int,
salary int default 10000,
primary key (id)
);

-- which salary inserted changed to new salary
-- which salary not inserted default 10K

insert into workerdetails
(id,name,age,salary)  -- changed salary
values
(1,"ram",28,12000),
(2,"shyam",26,13400);

select * from workerdetails;


insert into workerdetails
(id,name,age)  -- No change in salary default 10K
values
(3,"raj",22),
(4,"karan",18);

select * from workerdetails;