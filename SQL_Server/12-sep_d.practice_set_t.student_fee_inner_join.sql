use practice_set;
create table student(id int PRIMARY KEY IDENTITY,     
      admission_no varchar(45) NOT NULL,  
      first_name varchar(45) NOT NULL,      
      last_name varchar(45) NOT NULL,  
      age int,  
      city varchar(25) NOT NULL      
    );    
insert into student (admission_no, first_name, last_name, age, city)       
    VALUES 
	(3354,'priyanka', 'upadhyay', 13, 'Texas'),       
    (2135, 'rupali', 'vaidya', 15, 'Alaska'),       
    (4321, 'chetna', 'pathak', 14, 'California'),    
    (4213,'ritu', 'share', 17, 'New York'),       
    (5112, 'payal', 'kakde', 16, 'Florida'),  
    (6113, 'chhaya', 'thakre', 15, 'Arizona'),    
    (7555,'mayuri', 'ghangare', 14, 'New York'),       
    (8345, 'komal', 'upadhyay', 13, 'California');  
	select*from student;

	create table fee(admission_no varchar(45) NOT NULL,  
      course varchar(45) NOT NULL,      
      amount_paid int );   

	insert into fee
	(admission_no, course, amount_paid)       
    VALUES (3354,'Java', 20000),       
    (7555, 'Android', 22000),       
    (4321, 'Python', 18000),    
    (8345,'SQL', 15000),       
    (5112, 'Machine Learning', 30000);  
	select *from fee;
	
    SELECT Student.admission_no, Student.first_name, Student.last_name, Fee.course, Fee.amount_paid  
    FROM Student INNER JOIN Fee  
    ON Student.admission_no = Fee.admission_no;  
