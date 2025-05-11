create database primaryKeytemp;

use primaryKeytemp;

create table employee
(id int,
name varchar(30),
age int,
primary key (id));

-- you can make pk as combination of id and name as well
-- like -->   primary key (id,name)

insert into employee
(id,name,age)
values
(1,"ram",45),
(2,"rohit",32),
(3,"aman",43);


-- if you insert data with null value of pk gives error


--   insert into employee
--   (id,name,age)
--   values
--   (null,"aman",43);





-- if you insert data with duplicate value of pk gives error


--    insert into employee
--    (id,name,age)
--    values
--    (2,"amara",23);




-- you can insert data with duplicate or null value of other columns except pk



insert into employee
(id,name,age)
values
(4,"rajan",null),
(5,"rohit",32);
-- rohit name can be duplicate
-- rajan age can be null


select * from employee;







