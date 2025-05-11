use unionDB;

create view view1 as
select rollno , name , marks
from student;

select * from view1;


select * from view1 where marks > 80;


--    changes made in view reflects on table   ---->   true