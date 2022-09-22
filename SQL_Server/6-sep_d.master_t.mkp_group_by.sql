create table mkp(id int primary key,sname varchar(20),username varchar(20),city varchar(20));
insert into mkp values(45,'priyanka', 'python', 'nagpur')
insert into mkp values(67,'priti', 'java', 'raypur')
insert into mkp values(79,'komal', 'c', 'mumbai')
insert into mkp values(23,'gayatri', 'c++', 'delhi')
insert into mkp values(89,'om', 'angular', 'hyderabad')
insert into mkp values(90,'rohit', 'html', 'bangalore')
select* from mkp
select username, count(*) from mkp
where city='nagpur'
group by username