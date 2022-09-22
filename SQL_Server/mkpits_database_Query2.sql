--5- create a table customers having columns custid,custname,custaddress
--6- insert 10 records
--7- view all records

create table customer (custid int primary key, custname varchar(20), custaddress varchar(30))
insert customer values(245, 'gayatri' ,' nagpur')
insert customer values(45, 'priyanka' ,' mumbai')
insert customer values(145, 'priti' ,' pune')
insert customer values(56, 'pranali' ,' mp')
insert customer values(78, 'kajal' ,' nagpur')
insert customer values(89, 'sonam' ,' mumbai')
insert customer values(12, 'komal' ,' nagpur')
insert customer values(90, 'Aarti' ,' mp')
insert customer values(34, 'pooja' ,' pune')
insert customer values(40, 'seeta' ,' nagpur')
select * from customer
select*from customer order by custname
select*from customer where custname='priyanka'
select * from customer where custid=12
select * from customer where custid>13
select * from customer where custid>12 and custid<90 order by custid desc


