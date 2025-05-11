use unionDB;

-- get names with marks of all students who scored more than class average

select name , marks from student
where marks > (select avg(marks) from student) ;


-- find the names of all students with even roll no using subqueries in where

select name from student
where rollno in (select rollno from student where rollno % 2 = 0);

-- without subquery also possible

select name from student where rollno % 2 = 0;



-- find max marks of stuents of delhi using subquery in from
-- ALWAYS USE ALIAS WITH SUBQUERY IN FROM

select max(marks) from (select * from student where city = "delhi") as delhi_table ;

-- without subquery

select max(marks) from student where city = "delhi";




-- subquery in select

-- example

select (select max(marks) from student) , name from student;

-- only one valued subquery is possible in select