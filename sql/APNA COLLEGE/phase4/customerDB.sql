create database IF NOT EXISTS customerDB;

use customerDB;


create table payment(
cust_Id int,
customer varchar(50),
mode varchar(20),
city varchar(20),
primary key (cust_Id)
);

describe payment;

insert into payment
(cust_Id,customer,mode,city)
values
(101,"Olivia Barrett","Net banking","Portland"),
(102,"Ethan Sinclair","Credit Card","Miami"),
(103,"Maya Hernandez","Credit Card","Seattle"),
(104,"Liam Donovan","Credit Card","Denver"),
(105,"Sophia Nguyen","Net banking","New Orleans"),
(106,"Caleb Foster","Credit Card","Minneapolis"),
(107,"Ava Patel","Debit Card","Phoenix"),
(108,"Lucas Carter","Debit Card","Boston"),
(109,"Isabella Martinez","Net banking","Nashville"),
(110,"Jackson Brooks","Credit Card","Boston");


-- Qs1 --> find the total payment according to each payment method

select mode , count(cust_Id) as no_of_total_payment
from payment
group by mode;