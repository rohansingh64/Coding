create database p240125;

show databases;

use p240125;

create table student
(id int primary key,
name varchar(30),
age int default(15) check(age>=10));

insert into student
(id,name,age)
values
(1,'ankit',null),
(2,'boby',20),
(3,'kiran',12),
(4,'tanmay',18);

select * from student where id = 1;

update student
set age = 16
where age is null;


insert into student
(id,name)
values
(5,'rahul');

select * from student where name like '%b_b%';

alter table student
rename to student1;

show tables;

create table student2
(id int primary key,
name varchar(30),
class int);

insert into student2
(id,name,class)
values
(4,'ram',2),
(5,'aarav',1),
(6,'tanu',7);

select * from 
student1 as s1 left join student2 as s2
on s1.id = s2.id
union
select * from 
student1 as s1 right join student2 as s2
on s1.id = s2.id;