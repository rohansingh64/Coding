create database college1;

use college1;

create table student(
rollno int,
name varchar(50),
marks int not null,
grade varchar(1),
city varchar(20),
primary key (rollno)
);

insert into student
(rollno,name,marks,grade,city)
values
(101,"anil",78,"C","pune"),
(102,"bhumika",93,"A","mumbai"),
(103,"chetan",85,"B","mumbai"),
(104,"dhruv",96,"A","delhi"),
(105,"emanuel",12,"F","delhi"),
(106,"farah",82,"B","delhi");

select * from student;