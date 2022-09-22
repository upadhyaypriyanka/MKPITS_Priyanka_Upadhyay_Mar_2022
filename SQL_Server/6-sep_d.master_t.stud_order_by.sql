create table stud(first_name varchar(20)  ,
last_name varchar(20) , 
coursename varchar(10),
city varchar(20),
state varchar(20));
insert into stud values('priyanka','upadhyay','python','nagpur','maharashtra')
insert into stud values('guddu','upadhyay','java','riwa','mp')
insert into stud values('komal','upadhyay','python','alahabad','up')
insert into stud values('kajal','sharma','c++','jabalpur','mp')
insert into stud values('pooja','pathak','html','nagpur','maharashtra')
insert into stud values('priyanka','upadhyay','python','mumbai','maharashtra')
select*from stud
select first_name,last_name from stud order by first_name
select first_name,last_name from stud order by first_name desc
select* from stud order by coursename
select distinct last_name from stud
--drop table stud
