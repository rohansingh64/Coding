CREATE DATABASE school;

USE school;


SHOW TABLES;

CREATE TABLE student(
id INT,
name VARCHAR(20) NOT NULL,
class INT,
PRIMARY KEY (id)
);

INSERT INTO student
(id,name,class)
VALUES
(1,"aditya",2),
(2,"arav",3),
(3,"ashish",2),
(4,"ayush",1),
(5,"deepak",4),
(6,"raj",3);

SELECT * FROM students;


-- ALTER TABLE TABLE_NAME ---> FOR CHANGE IN SCHEMA 
-- 5 ALTER QUERIES -->  rename table name  ,  add column ,  drop column
--     ,  change column ,  modify column



-- change the table name student to students

ALTER TABLE student
RENAME TO students;


-- change the table name students to student

ALTER TABLE students
RENAME TO student;




-- add a column age

ALTER TABLE student
ADD COLUMN age INT DEFAULT 10;

SELECT * FROM student;




UPDATE student
SET age = 6
WHERE class = 1;

UPDATE student
SET age = 8
WHERE class = 2;

UPDATE student
SET age = 9
WHERE class = 3;

SELECT * FROM student;




ALTER TABLE student
CHANGE COLUMN name
first_name VARCHAR(20);

-- name change to first_name and constrain not null will remove

SELECT * FROM student;

DESCRIBE student;




-- change age column datatype and constraint

ALTER TABLE student
MODIFY COLUMN age
VARCHAR(2) DEFAULT "6";

DESCRIBE student;

SELECT * FROM student;



-- drop column age

ALTER TABLE student
DROP COLUMN age;

DESCRIBE student;

SELECT * FROM student;


-- TRUNCATE TABLE TABLE_NAME
-- use for delete all data from table but not delete schema of table

-- drop --> delete data and also table schema

CREATE TABLE masters(
id INT,
name VARCHAR(20),
PRIMARY KEY (id)
);

DESCRIBE masters;

INSERT INTO masters
(id,name)
VALUES
(11,"ajay"),
(21,"ravi"),
(16,"rajendra");

SELECT * FROM masters;


DROP TABLE masters;
-- it will also delete structure of masters table
-- means now there is no table as masters


TRUNCATE TABLE student;
-- it only deletes data of student table
-- not table so you can insert new data also