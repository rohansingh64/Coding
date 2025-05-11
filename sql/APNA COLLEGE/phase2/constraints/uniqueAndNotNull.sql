create database uniquiDB;

use uniquiDB;

create table courseFees(
id int,
name varchar(20) unique,
fees varchar(10) not null,
primary key (id)
);


insert into coursefees
(id,name,fees)
values
(1,"btech","1.10L"),
(2,"mtech","1.30L"),
(3,"phd","1.83L");

select * from coursefees;


insert into coursefees
(id,name,fees)
values
(4,"ba","40K"),
(5,"mtech","1.30L");
-- gives error because name can not be duplicate

insert into coursefees
(id,name,fees)
values
(4,"ba",null);
-- gives error because fees can not be null


