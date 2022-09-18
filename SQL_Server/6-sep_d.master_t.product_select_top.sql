create table product(productid int primary key,productname varchar(20), price int ,quantity int );
insert into product values(13,'mobile',12000,1)
insert into product values(45,'laptop',52000,2)
insert into product values(24,'refrigerator',40000,1)
insert into product values(90,'television',15000,4)
insert into product values(17,'speaker',10000,3)
insert into product values(87,'camera',50000,2)
select*from product
select top 3
price,productid from product order by quantity
select top 50 percent price,productid from product order by price desc