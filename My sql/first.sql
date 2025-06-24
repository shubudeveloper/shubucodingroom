create database reg22105128022;
use reg22105128022;
create table student(
	student_id int,
    first_name varchar(20),
    last_name varchar(20),
    subjects varchar(20),
    marks int
);

insert into student(student_id,  first_name, last_name, subjects, marks)
values
(1, "Shubham", "Kumar", "Operating System", 81),
(2, "Saurav", "Kumar", "Operating System", 72),
(3, "Sumit", "Kumar", "Operating System", 84),
(4, "Shekhar", "Kushwaha", "Operating System", 55),
(5, " Nishant", "Raj", "Operating System", 76);

select *from student;
