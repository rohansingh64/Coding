create database college2;

use college2;


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


-- college convert grade A to grade O so update your table entries

update student
set grade = "O"
where grade = "A";

select * from student;


-- let say 1 mcq question is wrong question so college increase 1 mark of every student

update student
set marks = marks + 1;

select * from student;

-- emanuel marks are calculated wrong update marks to 83 and also grade acc to marks


update student
set marks = 83 , grade = "B"
where name = "emanuel";

-- rollno 105 actual marks is 24 so udate its marks and grades

update student
set marks = 24 , grade = "F"
where rollno = 105;



-- college decided to remove data of student who is failed (marks < 33)

delete from student
where marks < 33;

select * from student;


update student
set name = "any";

-- IF YOU UPDATE WITHOUT WHERE CONDITION WITH KEY 
-- ----> INITIALLY SQL NOT ALLOW DUE TO SAFE MODE

-- SO YOU NEED TO CHANGE SAFE MODE TO (0)ZERO

set SQL_SAFE_UPDATES = 0;

-- now you can update