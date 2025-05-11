show databases;
-- use "--" for comments;
create database college;
create database company;
create database if not exists college;
-- create database college;  gives error already exists
create database if not exists university;
drop database if exists university;
drop database company;

drop database demo;