select*from customer;
select *from order4;
select c.custname,c.telno,o.orderid,o.orderdate,o.prodname,o.quantity,o.rate
 from customer c cross join order4 o;