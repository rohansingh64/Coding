USE ORGDB;


select DEPARTMENT from Worker;

select distinct DEPARTMENT from Worker;



-- select without from 

select 11 + 43;

select now();



--- use of  %  and  _ 

-- query --> find detils of those workers in their FIRST_NAME 'ha' comes

select * from Worker where FIRST_NAME like '%ha%';


-- query --> find full names of those workers whose first name end with letter a

select FIRST_NAME, LAST_NAME from Worker where FIRST_NAME like '%a';



-- query --> find detils of those workers whose 2nd letter of first_name is i

select * from Worker where FIRST_NAME like '_i%';


-- query --> find detils of those workers whose 3rd letter of first_name is i

select * from Worker where FIRST_NAME like '__i%';


-- query --> find detils of those workers whose name start with N and end with a

select * from Worker where FIRST_NAME like 'n%a';





-- find no of workers work in each department

select DEPARTMENT , count(WORKER_ID) from Worker
group by DEPARTMENT;


-- find average salary of each department

select DEPARTMENT , AVG(SALARY) from Worker
group by DEPARTMENT;


-- find maximum salary of each department

select DEPARTMENT , MAX(SALARY) from Worker
group by DEPARTMENT;


-- find minimum salary of each department

select DEPARTMENT , MIN(SALARY) from Worker
group by DEPARTMENT;



-- find department and no of worker works in department only for that department
-- where no of worker are greater than 2

-- here for worker in each department group by department
-- and a condition after grouping --> use having


SELECT DEPARTMENT , COUNT(WORKER_ID)
FROM Worker GROUP BY DEPARTMENT
HAVING COUNT(WORKER_ID) > 2;