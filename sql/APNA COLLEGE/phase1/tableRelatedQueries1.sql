-- for table releted queries you need to specify the 
-- database in which you performtable queries

use college;

-- creating a table student

create table student(
id int primary key,
name varchar(50),
age int not null
);


show tables;


-- describe table_name use for knowing structure of table


describe student;

-- inserting multiple values into student table

insert into student
(id,name,age)
values
(1,"ram",23),
(2,"karan",18),
(3,"shyam",21);

select * from student;

-- insert single value into table  important --> maintain columns order

insert into student values(4,"sravan",17);

-- gives primary key error  insert into student values(3,"raj",16);

-- gives error age not null due to constraints insert into student values(4,"sravan",null);




-- drop table student; OR 

drop table if exists student;

show tables;


create table if not exists student(
id int primary key,
name varchar(50)
);

insert into student
(id,name)
values
(1,"ram"),
(2,"shyam"),
(3,"arjun");

insert into student value(4,"karan");
insert into student value(5,"ram");

select * from student;


select name from student;

select distinct name from student;

select * from student where student.name = "ram";

