create database proceduresDB;

use proceduresDB;


create table student(
id int,
name varchar(50),
age int,
primary key (id)
);

insert into student
(id,name,age)
values
(1,'arav',14),
(2,'ram',16),
(5,'raghav',16);

select * from student;



-- create a stored procedure  for add new student

delimiter //
create procedure
add_new_student(in new_id int , in new_name varchar(50) , in new_age int)
begin
insert into student
(id,name,age)
values
(new_id,new_name,new_age);
end; //

call add_new_student(7,'piyush',12);

call add_new_student(10,'priya',18);

call add_new_student(3,'priyank',28);

select * from student;



-- create a procedure which prints details of n older student

-- you can use any alphabet as delimiter but this not affect sql query

delimiter ??
create procedure
show_older_n_student(in n int)
begin
select * from student
order by age desc
limit n;
end; ??



call show_older_n_student(3);

call show_older_n_student(5);




-- create a procedure to update age by age + n

delimiter //
create procedure update_age(in n int)
begin
update student
set age = age + n;
end; //

call update_age(2);

select * from student;



delimiter >>
create procedure count_student(out n int)
begin
select count(id) into n
from student;
end; >>


call count_student(@n);
select @n as student_count;

drop procedure count_student;

select now();