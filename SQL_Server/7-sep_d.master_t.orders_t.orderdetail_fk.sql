create table orders(orderid int primary key,orderdate date,custid int);


create table orderdetails(
orderid int,
product_name varchar(30),
quantity int,
constraint fk1 foreign key(orderid)

references orders(orderid));

insert into orders values(234,'2002-07-12',2)
select*from orders
insert into orderdetails(product_name,quantity) values('cars',4)
insert into orderdetails values(234,'bikes',2)
select*from orderdetails