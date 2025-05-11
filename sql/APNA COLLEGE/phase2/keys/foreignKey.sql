-- CONSTRAINTS OF FOREIGN KEY

--    1

--    insert into student
--    (id,name,age,course_id)
--    values
--    (8,"raj",22,5);

-- here you take course_id == 5 this is a 
-- foreign key refers id of couse table and 5 is
-- not present in id of course table
-- GIVES ERROR



--    2

-- if you delete from parent table course then gives error
-- if corresponding fk present in child table student

-- if you want delete in parent table

--  use  on delete cascade  --> parent delete --  child me automatically delete

--  use on delete set null  --> parent delete  -- child me fk value null ho jayega




create database foreignKeytemp;

use foreignKeytemp;

create table course(
id int,
name varchar(30),
primary key (id)
);

insert into course
(id,name)
values
(1,"btech"),
(2,"mtech"),
(3,"phd");

select * from course;


create table student(
id int,
name varchar(50),
age int,
course_id int,
primary key (id),
foreign key (course_id) references course (id)
);

insert into student
(id,name,age,course_id)
values
(1,"ram",22,2),
(2,"shyam",19,1),
(3,"arjun",26,3),
(4,"rohan",22,2);

select * from student;


insert into student
(id,name,age,course_id)
values
(5,"ashish",21,null),-- foreign key can be null no error
(6,"prince",20,2),
(7,"ayush",23,2); -- fk can be duplicate

select * from student;

--    insert into student
--    (id,name,age,course_id)
--    values
--    (8,"raj",22,5);  cant insert 5 is not in course



