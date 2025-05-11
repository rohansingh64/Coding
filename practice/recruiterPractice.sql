create database if not exists recruter;

show databases;

use recruter;

create table student
(id int primary key,
name varchar(20),
mentor_id int);

insert into student
(id,name,mentor_id)
values
(1,'rohan',null),
(2,'ayush',1),
(3,'ashish',1),
(4,'priyank',3),
(5,'prince',3);

show tables;

describe student;

select * from student;

select *
from student as m
join student as s on m.id = s.mentor_id;

-- find student names who have same mentor

select mentor_id , count(*)
from student
group by mentor_id;