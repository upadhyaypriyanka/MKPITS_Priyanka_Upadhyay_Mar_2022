select*from students;
select*from fee;

select s1.first_name,s2.last_name,s2.city
from students s1 ,students s2 
WHERE S1.id <> S2.iD AND S1.city = S2.city  
    ORDER BY S2.city;  
