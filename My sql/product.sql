use reg22105128022;
create table product(
	id int,
    product_name varchar(50),
    price int
);

insert into product(id, product_name, price)
values
(1, "Mango", 100),
(2, "Banana", 150),
(3, "Biscuits", 130),
(4, "Apple", 120),
(5, "Grapes", 200);

select *from product;

-- aggrete functions

select sum(price) from product;
select avg(price) from product;
select max(price) from product;
select min(price) from product;
select count(*) from product;