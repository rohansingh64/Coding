CREATE DATABASE joinDBCOLLEGE;

USE joinDBCOLLEGE;

CREATE TABLE student(
st_id INT,
name VARCHAR(20),
PRIMARY KEY (st_id)
);

INSERT INTO student
(st_id,name)
VALUES
(101,"adam"),
(102,"bob"),
(103,"casey");

SELECT * FROM student;


CREATE TABLE course(
st_id INT,
course VARCHAR(20),
PRIMARY KEY (st_id)
);

INSERT INTO course
(st_id,course)
VALUES
(102,"english"),
(105,"math"),
(103,"science"),
(107,"computer science");

SELECT * FROM course;
