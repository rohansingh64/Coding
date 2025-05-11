
show databases;


create database company121DB;

use company121DB;

drop database company121DB;

CREATE TABLE worker (
	WORKER_ID INT,
	FIRST_NAME VARCHAR(25),
	LAST_NAME VARCHAR(25),
	SALARY INT,
	JOINING_DATE DATE,
	DEPARTMENT VARCHAR(25),
    PRIMARY KEY (WORKER_ID)
);

INSERT INTO worker 
(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT)
VALUES
(001, "Monika", "Arora", 100000, '2014-02-20', "HR"),
(002, "Niharika", "Verma", 80000, '2014-06-11', "Admin"),
(003, "Vishal", "Singhal", 300000, '2014-02-20', "HR"),
(004, "Amitabh", "Singh", 500000, '2014-02-20', "Admin"),
(005, "Vivek", "Bhati", 500000, '2014-06-11', "Admin"),
(006, "Vipul", "Diwan", 200000, '2014-06-11', "Account"),
(007, "Satish", "Kumar", 75000, '2014-01-20', "Account"),
(008, "Geetika", "Chauhan", 90000, '2014-04-11', "Admin");


SELECT * FROM worker;

describe worker;

-- SELECT *,DATE_FORMAT(JOINING_DATE, '%Y-%m-%d %H:%i:%s')
-- AS formatted_datetime FROM worker;

CREATE TABLE bonus (
	WORKER_REF_ID INT,
	BONUS_AMOUNT INT,
	BONUS_DATE DATE,
	FOREIGN KEY (WORKER_REF_ID)
		REFERENCES worker(WORKER_ID)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

INSERT INTO bonus 
(WORKER_REF_ID, BONUS_AMOUNT, BONUS_DATE)
VALUES
(001, 5000, '2016-02-20'),
(002, 3000, '2016-06-11'),
(003, 4000, '2016-02-20'),
(001, 4500, '2016-02-20'),
(002, 3500, '2016-06-11');

SELECT * FROM bonus;
        
CREATE TABLE title (
	WORKER_REF_ID INT,
	WORKER_TITLE VARCHAR(25),
	AFFECTED_FROM DATE,
	FOREIGN KEY (WORKER_REF_ID)
		REFERENCES worker(WORKER_ID)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

INSERT INTO title 
(WORKER_REF_ID, WORKER_TITLE, AFFECTED_FROM)
VALUES
(001, "Manager", '2016-02-20'),
(002, "Executive", '2016-06-11'),
(008, "Executive", '2016-06-11'),
(005, "Manager", '2016-06-11'),
(004, "Asst. Manager", '2016-06-11'),
(007, "Executive", '2016-06-11'),
(006, "Lead", '2016-06-11'),
(003, "Lead", '2016-06-11');

SELECT * FROM Title;

select DATE_FORMAT(now(),'%Y-%m-%d %H:%i:%s') as current_time;