use reg22105128022;
create table friend_info(
	id int,
    friend_name varchar(20),
    district varchar(20)
);

insert into friend_info(id, friend_name, district)
values
(1, "Yash Raj", "Patna"),
(2, "Sumit Kumar", "Sasaram"),
(3, "Abhishek Kumar", "Gaya"),
(4, "Nishant Raj", "Jamalpur"),
(5, "Shekhar Kushwaha", "East Champaran");

select *from friend_info;
select friend_name from friend_info where district='Gaya';
select friend_name from friend_info where district='Patna';
select friend_name from friend_info where district='Sasaram';
select friend_name from friend_info where district='Jamalpur';
select friend_name from friend_info where district='East Champaran';