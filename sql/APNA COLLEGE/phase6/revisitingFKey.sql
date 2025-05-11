create database department_teacherDB;

use department_teacherDB;


-- you cant delete a row from parent table which data
-- present in child table 
-- for deleting you need to use on delete cascade or on delete set null

create table department(
id int,
name varchar(20),
primary key (id)
);

describe department;

insert into department
(id,name)
values
(101,"btech"),
(102,"mtech"),
(103,"phd"),
(104,"ba");

select * from department;


create table teacher(
id int,
name varchar(20),
dept_id int,
primary key (id),
foreign key (dept_id) references department(id)
on delete cascade
-- on delete set null
on update cascade
);



-- can't insert invalid value of dept_id (fk) in child table

insert into teacher
(id,name,dept_id)
values
(1,"ram",103),
(2,"shyam",101),
(3,"bob",103),
(4,"ayush",102),
(5,"ashish",104),
(6,"raj",103),
(7,"yuvi",102);

select * from teacher;


-- if ba course delete then automatically all teacher of ba also deleted
-- if you use on delete cascade --> parent delete --> child me automatically delete

-- and if you use on delete null then in teacher dept_id(fk) becomes null


delete from department
where name = "ba";

select * from department;

select * from teacher;




-- if phd id change from 103 to 113 in department it also change in teacher table


update department
set id = "113"
where id = "103";

select * from department;

select * from teacher;