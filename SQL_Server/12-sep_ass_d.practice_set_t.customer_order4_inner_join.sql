--create a table customer having custid,custname,telno
--create a table orders4 having orderid,orderdate,custid ,prodname,qty,rate
--then write a query to display records from customer and orders tables using inner join


create table customer(custid int primary key identity,
custname varchar(20),
telno varchar(12) );
drop table customer;

insert into customer(custname,telno) values
('priyanka upadhyay','9087654326'),
('gayarti sable','9087674326'),
('snehal nagrale','9437654326'),
('samiksha jampalwar','7856341209'),
('ritu bawane','9087667126');


create table order4(orderid int,
orderdate date,
custid int not null,
prodname varchar(20) not null, 
quantity int,
rate decimal(5,2));
drop table order4;

insert into order4 (orderid,orderdate,custid,prodname,quantity,rate) values
(123,'2022-07-12',1,'saari',4,599.99),
(128,'2022-07-25',2,'kurti',7,786.99),
(124,'2022-07-18',3,'ankal',5,234.99),
(125,'2022-07-20',4,'long',3,978.49),
(126,'2022-07-14',5,'jeens',5,786.23),
(127,'2022-07-19',6,'top',9,456.59);

select*from customer;
select *from order4;

 select c.custname,c.telno,o.orderid,o.orderdate,o.prodname,o.quantity,o.rate
 from customer c inner join order4 o
 on c.custid=o.custid;





