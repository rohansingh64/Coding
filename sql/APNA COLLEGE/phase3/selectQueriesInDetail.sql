use college1;


-- for view all columns in student table
select * from student;

-- for view only name and marks columns in student table
select name , marks from student;

-- for view distinct value of any column in student table
select distinct city from student;



-- where clause   ----> use for specific condition


-- query --> give data of student whose marks are greater than or equal to 80

select * 
from student 
where marks >= 80;

-- query --> give names of student who lived in delhi

select name 
from student 
where city = "delhi";

-- query --> give student data which marks - 30 >= 0

select * 
from student 
where marks - 30 >= 0;

-- AND operator

select name 
from student 
where city = "delhi" and grade != "F";

-- OR operator

select *
from student
where marks >= 90 or city = "mumbai";

-- BETWEEN operator  --> includes extreme values also

select *
from student
where marks between 80 and 90;

-- IN operator

select * 
from student 
where city in ("delhi","pune");

-- NOT operator negate condition

select * 
from student 
where city not in ("delhi","mumbai");





-- LIMIT clause

select *
from student
limit 3;
-- take only upper 3 rows

select *
from student
where marks >= 80
limit 2;
-- first apply condition marks >= 80
-- then on those remaining data values
-- take only upper 2 rows




-- ORDER BY  clause  --> for desc or asc order

select * FROM student
order by marks asc;


-- write sql query for fetch data of top 3 students

select *
from student
order by marks desc
limit 3;


-- AGGREGATE FUNCTIONS


-- find max marks
select max(marks) from student;

-- find data of student whose marks is maximum
select * from student
where marks = (select max(marks) from student);

-- find avarage marks
select avg(marks) from student;

-- find data of student who is above avarage
select * from student
where marks > (select avg(marks) from student);




-- GROUP BY  clause

--  use for grouping by any one or more columns


--  count no of students in each city

select city , count(rollno)
from student
group by city;




-- HAVING CLAUSE

-- --> SIMILIAR TO WHERE CLAUSE BUT USE FOR CONDITION AFTER GROUPING




--    NO OF STUDENT IN EACH CITY WHERE MAX MARKS CROSS 90

--    HERE CONDITION IS APPLIED AFTER GROUPING HOW
--    here given that you choose only that city whoose max mark cross 90

select city , count(rollno)
from student
group by city
having max(marks) > 90;



-- no of student in each city whose marks > 70

select city , count(rollno)
from student
where marks > 70
group by city;


-- QS WRITE SQL QUERY TO FIND AVG MARKS IN EACH CITY IN ASCENDING ORDER

select city , avg(marks) as avarage_marks
from student
group by city
order by avarage_marks asc;
