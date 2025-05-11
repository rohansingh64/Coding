create database checkConstraintsDB;
use checkConstraintsDB;

create table marrige(
marrige_id int,
husband_name varchar(50),
husband_age int check (husband_age >= 21),
wife_name varchar(50),
wife_age int check (wife_age >= 18),
primary key (marrige_id)
);

insert into marrige
(marrige_id,husband_name,husband_age,wife_name,wife_age)
values
(1211,"ram",23,"sita",20),
(1219,"krishna",21,"radha",18),
(1981,"arjana",28,"subhadra",19);

select * from marrige;

insert into marrige
(marrige_id,husband_name,husband_age,wife_name,wife_age)
values
(1222,"ayush",19,"ayushi",20);
-- gives error husband_age >= 21 and wife_age >= 21


