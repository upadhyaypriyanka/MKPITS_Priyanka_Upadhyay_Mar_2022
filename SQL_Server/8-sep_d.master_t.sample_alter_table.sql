create table sample(id int, age int constraint df default 10)
insert into sample (id) values (13);
select*from sample

alter table sample drop constraint df
--drop table sample
insert into sample (id) values (34);
select*from geeks
 insert into geeks values(34,'sonam',12,'nagpur');