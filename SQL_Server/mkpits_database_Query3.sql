--8- create a table users having column userid, username, password1,emailid,gender,city,country
--9- insert 10 records of different users
--10 -view all records
create table users1 (userid int primary key , username varchar(20),password1 int , emailid varchar(20), gender varchar(10) , city varchar(20), country varchar(15))
insert users1 values(67,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(23,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(17,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(27,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(26,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(24,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(03,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(20,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(11,'priti',4567,'priti@123','female','nagpur','india')
insert users1 values(19,'priti',4567,'priti@123','female','nagpur','india')
select* from users1