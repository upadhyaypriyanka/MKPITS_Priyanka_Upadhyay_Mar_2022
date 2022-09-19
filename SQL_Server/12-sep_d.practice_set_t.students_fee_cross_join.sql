select* from students;
select*from fee;
SELECT Students.admission_no, Students.first_name, Students.last_name, Fee.course, Fee.amount_paid  
    FROM Students cross JOIN Fee ; 