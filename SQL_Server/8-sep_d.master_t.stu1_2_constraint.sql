create table stu(id int not null,
              name varchar(20) not null,
			  address varchar(20));
insert into stu values(23,'priyanka','arya nagar');
insert into stu values(45,'gayatri',' khaparkheda');
insert into stu values(23,'pooja','koradi');
insert into stu values(23,'samiksha','saoner');
--insert into stu(address) values('saoner');

select*from stu;

create table stu1(id int unique, name varchar(20));
insert into stu1 values(2,'priyanka');
--insert into stu1 values(2,'priti');
insert into stu1(name) values('gayatri');
select*from stu1;

create table stu2(id int unique, rno int primary key,name varchar(20));
insert into stu2 values(3,45,'priyanka');
insert into stu2(rno,name) values (35,'gayatri');
--insert into stu2(name) values ('priti');
select * from stu2;

create table vendor_groups2(group_id int primary key,
group_name varchar(40)) ;

create table vendors1(vendor_id int primary key,
vendor_name varchar(30) not null,
group_id int default 100,
constraint fk55 foreign key (group_id)
references vendor_groups2(group_id)
     on update set default);

	 insert into vendor_groups2 values(2,'tcs1');
	 
	 insert into vendor_groups2 values(1,'tcs');
	 insert into vendors1 values (123,'priyanka',2);
	 	 insert into vendors1 values (113,'gayatri',2);
		-- update vendor_groups2 set group_id=22 where group_name='tcs1';
	 select*from vendors1;
	 select* from vendor_groups2;