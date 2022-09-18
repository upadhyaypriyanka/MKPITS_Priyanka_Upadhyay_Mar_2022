create table student1(first_name varchar(20), last_name varchar(20),coursename varchar(20),city varchar(20));
insert into student1 values('priyanka','upadhyay','python','nagpur')
insert into student1 values('guddu','upadhyay','java','pune')
insert into student1 values('komal','upadhyay','python','nagpur')
insert into student1 values('kajal','sharma','c++','mp')
insert into student1 values('pooja','pathak','html','nagpur')
insert into student1 values('priyanka','upadhyay','python','mumbai')
select * from student1
select coursename ,count(*) from student1
where city='nagpur'
group by coursename

select last_name, count(*) from student1
where city='nagpur'
group by last_name
having count(*)>1

select * from student1 where first_name like 'a%t'
select * from student1 where first_name like 'a%'
select * from student1 where first_name like '%hah%'