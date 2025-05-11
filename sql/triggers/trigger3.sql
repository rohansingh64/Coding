use triggersDB;

-- student , employee and message table is already exists in this database

-- before update trigger 

-- let you update student age with less than 0 then it becomes 0

delimiter //
create trigger age_update_correct
before update
on student
for each row
begin
if new.age < 0 then
set new.age = 0;
end if;
end; //

select * from student;

update student
set age = -3
where id = 4;