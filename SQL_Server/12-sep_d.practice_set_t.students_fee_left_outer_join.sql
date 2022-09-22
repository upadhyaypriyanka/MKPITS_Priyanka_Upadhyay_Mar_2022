select*from students;
select*from fee;

select s.admission_no,s.first_name,s.last_name,s.age,s.city,f.course,f.amount_paid
from students s left outer join fee f
on s.admission_no=f.admission_no;