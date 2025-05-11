CREATE DATABASE selfjoinDB;

USE selfjoinDB;

CREATE TABLE employee(
id INT,
name VARCHAR(20),
manager_id INT,
PRIMARY KEY (id)
);


INSERT INTO employee
(id,name,manager_id)
VALUES
(101,"adam",103),
(102,"bob",104),
(103,"casey",NULL),
(104,"donald",103);

SELECT * FROM employee;


SELECT a.name AS manager_name , b.name AS employee_name
FROM employee AS a JOIN
employee AS b
ON a.id = b.manager_id;



-- find details of employees who has same manager

SELECT a.*
FROM employee AS a JOIN
employee AS b
ON a.manager_id = b.manager_id
where a.id != b.id
order by a.manager_id asc;

