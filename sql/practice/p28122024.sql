create database p28122024;

use p28122024;

create table student(
    id int primary key,
    name varchar(50),
    join_date_time datetime,
    leave_date date,
    leave_time time
);

insert into student
(id, name, join_date_time, leave_date, leave_time)
values
(1, 'John', '2019-12-28 12:00:00', '2019-12-29', '12:00:00'),
(2, 'Doe', '2019-12-28 13:00:00', '2019-12-30', '13:00:00'),
(3, 'Jane', '2019-12-28 14:00:00', '2019-12-31', '14:00:00'),
(4, 'Doe', '2019-12-28 15:00:00', '2020-01-01', '15:00:00'),
(5, 'John', '2019-12-28 16:00:00', '2020-01-02', '16:00:00');

select concat(date(join_date_time),' ',time(join_date_time)) as join_date_time from student;

select * from student;

select now();