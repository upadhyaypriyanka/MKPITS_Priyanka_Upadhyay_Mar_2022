select*from customer;
select *from order4;

SELECT S1.orderdate, S2.prodname, S2.rate  
    FROM order4 S1, order4 S2  
    WHERE S1.custid <> S2.custiD AND S1.quantity = S2.quantity  
    ORDER BY S2.quantity;  
