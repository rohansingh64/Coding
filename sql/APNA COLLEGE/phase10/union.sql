create database unionDB;

use unionDB;

create table student(
rollno int,
name varchar(20),
marks int,
city varchar(20),
primary key (rollno)
);

insert into student
(rollno,name,marks,city)
values
(101,"anil",78,"pune"),
(102,"bhumika",93,"mumbai"),
(103,"chetan",85,"mumbai"),
(104,"dhruv",96,"delhi"),
(105,"emanuel",92,"delhi"),
(106,"farah",82,"delhi");


-- find name of student who lived in pune or mumbai

select name 
from student 
where city = "pune" or city = "mumbai";

-- or second method

select name
from student
where city = "pune"
union
select name
from student
where city = "mumbai";
