
use company121DB;

-- Q-1. Write an SQL query to fetch “FIRST_NAME” from Worker table using the alias name as <WORKER_NAME>.

select FIRST_NAME as WORKER_NAME from worker; 

-- Q-2. Write an SQL query to fetch “FIRST_NAME” from Worker table in upper case.

select ucase(FIRST_NAME) from worker;

-- OR 

select upper(FIRST_NAME) from worker;




-- Q-3. Write an SQL query to fetch unique values of DEPARTMENT from Worker table.

select distinct DEPARTMENT from worker;



-- Q-4. Write an SQL query to print the first three characters of  FIRST_NAME from Worker table.

select substring(FIRST_NAME,1,3) from worker;

-- Q-5. Write an SQL query to find the position of the alphabet (‘b’) in the first name column ‘Amitabh’ from Worker table.

select instr(FIRST_NAME , 'b') from worker where FIRST_NAME = "Amitabh";


-- Q-6. Write an SQL query to print the FIRST_NAME from Worker table after removing white spaces from the right side.

select rtrim(FIRST_NAME) from worker;

-- Q-7. Write an SQL query to print the DEPARTMENT from Worker table after removing white spaces from the left side.

select ltrim(FIRST_NAME) from worker;


-- Q-8. Write an SQL query that fetches the unique values of DEPARTMENT from Worker table and prints its length.

select DEPARTMENT , length(DEPARTMENT) from worker group by DEPARTMENT;

-- Q-9. Write an SQL query to print the FIRST_NAME from Worker table after replacing ‘a’ with ‘A’.

select replace(FIRST_NAME , 'a' , 'A') from worker;


-- Q-10. Write an SQL query to print the FIRST_NAME and LAST_NAME from Worker table into a single column COMPLETE_NAME.
-- A space char should separate them.


select concat(FIRST_NAME,' ',LAST_NAME) as COMPLETE_NAME from worker;


-- Q-11. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending.

select * from worker order by FIRST_NAME asc;



-- Q-12. Write an SQL query to print all Worker details from the Worker table order by 
-- FIRST_NAME Ascending and DEPARTMENT Descending.

select * from worker order by FIRST_NAME asc , DEPARTMENT desc;


-- Q-13. Write an SQL query to print details for Workers with the first name as “Vipul” and “Satish” from Worker table.

select * from worker where FIRST_NAME in ("Vipul","Satish");


-- Q-14. Write an SQL query to print details of workers excluding first names, “Vipul” and “Satish” from Worker table.

select * from worker where FIRST_NAME not in ("Vipul","Satish");


-- Q-15. Write an SQL query to print details of Workers with DEPARTMENT name as “Admin*”.

select * from worker where DEPARTMENT like "Admin%";

-- Q-16. Write an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.

select * from worker where FIRST_NAME like "%a%";


-- Q-17. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘a’.

select * from worker where FIRST_NAME like "%a";


-- Q-18. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.

select * from worker where (FIRST_NAME like "%h" and length(FIRST_NAME) = 6);
-- or
select * from worker where FIRST_NAME like "_____h"; -- --> 5 times _ then h


-- Q-19. Write an SQL query to print details of the Workers whose SALARY lies between 100000 and 500000.

select * from worker where SALARY between 100000 and 500000;


-- Q-20. Write an SQL query to print details of the Workers who have joined in Feb’2014.

select * from worker where year(JOINING_DATE) = '2014' and month(JOINING_DATE) = '02';


-- Q-21. Write an SQL query to fetch the count of employees working in the department ‘Admin’.

select count(WORKER_ID) from worker where DEPARTMENT = "Admin";


-- Q-22. Write an SQL query to fetch worker full names with salaries >= 50000 and <= 100000.

select concat(FIRST_NAME,' ',LAST_NAME)
as FULL_NAME from worker
where SALARY between 50000 and 100000;


-- Q-23. Write an SQL query to fetch the no. of workers for each department in the descending order.

select DEPARTMENT , count(WORKER_ID) from worker
group by DEPARTMENT order by count(WORKER_ID) desc;


-- Q-24. Write an SQL query to print details of the Workers who are also Managers.

select w.* from
worker as w inner join title as t
on w.WORKER_ID = t.WORKER_REF_ID
where t.WORKER_TITLE = "Manager";


-- Q-25. Write an SQL query to fetch number (more than 1) of same titles in the ORG of different types.

select WORKER_TITLE , count(WORKER_REF_ID)
from title
group by WORKER_TITLE
having count(WORKER_REF_ID) > 1;

-- Q-26. Write an SQL query to show only odd rows from a table.

select * from worker where (WORKER_ID % 2 = 1);


-- Q-27. Write an SQL query to show only even rows from a table.

select * from worker where (WORKER_ID % 2 = 0);



-- Q-28. Write an SQL query to clone a new table from another table.

create table worker_clone like worker;
insert into worker_clone select * from worker;
-- check clone table --> worker_clone
select * from worker_clone;



-- Q-29. Write an SQL query to fetch intersecting records of two tables.
-- NO INTERSECTION IN SQL --> IMPLEMENTED USING JOIN

select worker.* from worker inner join worker_clone using (WORKER_ID);

-- Q-30. Write an SQL query to show records from one table that another table does not have.
-- MINUS

select w.* from worker as w left join worker_clone as wc using (WORKER_ID)
where wc.WORKER_ID is null;


-- Q-31. Write an SQL query to show the current date and time.
-- DUAL
-- --> Y --> 2024  y ---> 24  ||  H --> in 24 hour formate  h --> 12 hour formate
select DATE_FORMAT(now(),'%Y-%m-%d %h:%i:%s');

-- Q-32. Write an SQL query to show the top n (say 5) records of a table order by descending salary.

select * from worker
order by SALARY desc
limit 5;


-- Q-33. Write an SQL query to determine the nth (say n=5) highest salary from a table.

select SALARY from worker
order by SALARY desc
limit 4,1;

-- --> limit 4,1 -->  4 rows skip the 1 st rows after 4 rows



-- Q-34. Write an SQL query to determine the 5th highest salary without using LIMIT keyword.

select SALARY from worker as w1
where 4 =
(select count(distinct w2.SALARY) from worker as w2
where w2.SALARY >= w1.SALARY);


-- Q-35. Write an SQL query to fetch the list of employees with the same salary.
--  self join
select w1.* from worker as w1
join worker as w2
where w1.SALARY = w2.SALARY and w1.WORKER_ID != w2.WORKER_ID;


-- Q-36. Write an SQL query to show the second highest salary from a table using sub-query.

select max(SALARY) from worker
where SALARY not in (select max(SALARY) from worker);



-- Q-37. Write an SQL query to show one row twice in results from a table.

select * from worker
union all 
select * from worker
order by WORKER_ID asc;


-- Q-38. Write an SQL query to list worker_id who does not get bonus.

select w.WORKER_ID from
worker as w left join bonus as b
on w.WORKER_ID = b.WORKER_REF_ID
where b.WORKER_REF_ID is null;

-- or

select WORKER_ID from
worker where WORKER_ID not in (select WORKER_REF_ID from bonus);




-- Q-39. Write an SQL query to fetch the first 50% records from a table.


select * from worker
where WORKER_ID <= (select count(WORKER_ID)/2 from worker);



-- Q-40. Write an SQL query to fetch the departments that have less than 4 people in it.

select DEPARTMENT , count(WORKER_ID) from worker
group by DEPARTMENT
having count(WORKER_ID) < 4;


-- Q-41. Write an SQL query to show all departments along with the number of people in there.

select DEPARTMENT , count(WORKER_ID) from worker
group by DEPARTMENT;


-- Q-42. Write an SQL query to show the last record from a table.

select * from worker
where WORKER_ID = (select count(WORKER_ID) from worker);


-- Q-43. Write an SQL query to fetch the first row of a table.

select * from worker
limit 1;


-- Q-44. Write an SQL query to fetch the last five records from a table.

select * from worker
where WORKER_ID > (select count(WORKER_ID) - 5 from worker);

-- or 

(select * from worker order by WORKER_ID desc limit 5) order by WORKER_ID asc;




-- Q-45. Write an SQL query to print the name of employees having the highest salary in each department.


select w.DEPARTMENT , w.SALARY , w.FIRST_NAME from
(select DEPARTMENT , max(SALARY) as dep_max_sal from worker group by DEPARTMENT) as temp
inner join worker as w on temp.DEPARTMENT = w.DEPARTMENT
where w.SALARY = temp.dep_max_sal;




-- Q-46. Write an SQL query to fetch three max salaries from a table using co-related subquery

select distinct SALARY from worker order by SALARY desc limit 3;


-- Q-47. Write an SQL query to fetch three min salaries from a table using co-related subquery

select distinct SALARY from worker order by SALARY asc limit 3;

-- Q-48. Write an SQL query to fetch nth max salaries from a table.(n=4)


select distinct SALARY from worker order by SALARY desc limit 3,1;

-- Q-49. Write an SQL query to fetch departments along with the total salaries paid for each of them.

select DEPARTMENT , sum(SALARY)
from worker group by DEPARTMENT;


-- Q-50. Write an SQL query to fetch the names of workers who earn the highest salary.

select FIRST_NAME from worker
where SALARY = (select max(SALARY) from worker);