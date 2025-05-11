create database if not exists practice26122024;
use practice26122024;
create table popo(
    id int primary key,
    name varchar(255),
    age int ,
    constraint check_age check(age > 0)
);

drop table popo2;
insert into popo
(id, name, age)
values
(1, 'a', 10),
(2, 'b', 20),
(3, 'c', 30),
(4, 'd', 40),
(5, 'e', 50);

select * from popo;

select * from popo where popo.age > 18;

create table popo2(
    id int primary key,
    name varchar(255),
    salary int default(500)
);

insert into popo2
(id, name, salary)
values
(1, 'a', 1000),
(2, 'b', 2000),
(3, 'c', 3000),
(8, 'd', 4000),
(10, 'e', 5000);

select * from popo2;

insert into popo2
(id,name)
values
(12,'g');

select * from popo2;


drop table popo2;

show tables;

-- INNER JOIN
SELECT * FROM popo AS p
INNER JOIN popo2 AS p2
ON p.id = p2.id;

-- LEFT JOIN
SELECT * FROM popo AS p
LEFT JOIN popo2 AS p2
ON p.id = p2.id;

-- RIGHT JOIN
SELECT * FROM popo AS p
RIGHT JOIN popo2 AS p2
ON p.id = p2.id;

-- FULL JOIN
(SELECT * FROM popo AS p
LEFT JOIN popo2 AS p2
ON p.id = p2.id)

UNION

(SELECT * FROM popo AS p
RIGHT JOIN popo2 AS p2
ON p.id = p2.id);



describe popo;


update popo
set age = 60
where name = 'c';

delete from popo
where age > 50;

select id as Id , name as Name , age as Age from popo;

update popo2
set salary = 500;

update popo2
set name = 'any';

set sql_safe_updates = 0;


--  crud on view affect on table also

create view view1 as
select id as Id, name as Name from popo;


select * from view1;

insert into view1
(Id, Name)
values
(6, 'f');

select * from view1;

delete from view1
where Id = 5;

select * from view1;

select * from popo;