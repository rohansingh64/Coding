CREATE DATABASE coaching;

USE coaching;

CREATE TABLE students(
id INT,
name VARCHAR(20),
marks INT,
grades VARCHAR(1),
PRIMARY KEY (id)
);

INSERT INTO students
(id,name,marks,grades)
VALUES
(1,"arav",82,"B"),
(2,"ravi",88,"B"),
(3,"aditya",92,"A"),
(4,"rajan",70,"C"),
(5,"suresh",31,"F");

SELECT * FROM students;


-- change the name of column name to full_name

ALTER TABLE students
CHANGE COLUMN name
full_name VARCHAR(20);

DESCRIBE students;
SELECT * FROM students;



-- delete all students who scored marks less than 80

DELETE FROM students
WHERE marks < 80;

SELECT * FROM students;



-- delete column for grades

ALTER TABLE students
DROP COLUMN grades;

DESCRIBE students;
SELECT * FROM students;