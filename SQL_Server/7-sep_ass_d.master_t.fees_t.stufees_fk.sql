create table fees(first_name varchar(20),last_name varchar(20),rno int primary key);
insert into fees values('priyanka','upadhyay',11)
insert into fees values('gayatri','sable',12)
insert into fees values('khushi','shahu',24)
select*from fees

create table stufees(feesid int primary key,
  rno int ,
  amount int ,
  fees_pay date
  constraint fk3 foreign key (rno)
  references fees(rno)
  );
  insert into stufees values(1,11,50000,'2022-09-22')
  insert into stufees values(3,24,54000,'2022-09-12')
  insert into stufees values(2,12,50000,'2022-09-22')
  select*from stufees