use reg22105128022;
create table student_marks(
	student_id int,
    subjects varchar(50),
    marks int,
    semester varchar(20)
);

insert into student_marks(student_id, subjects, marks, semester)
values
(1, "Operating System", 81, "Fourth"),
(2, "Chemistry", 89, "First"),
(3, "Human Resource Development & Organizational Behaviour", 77, "Fourth"),
(4, "Technical Writing", 73, "Third"),
(5, "Programming for Problem Solving", 53, "First");
select *from student_marks;
select subjects,semester from student_marks;