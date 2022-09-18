use  BikeStores
create table coustomers(customer_id INT  PRIMARY KEY,
first_name VARCHAR (255) NOT NULL,
last_name VARCHAR (255) NOT NULL,
phone VARCHAR (25),
email VARCHAR (255) NOT NULL,
street VARCHAR (255),
city VARCHAR (50),
state VARCHAR (25),
zip_code VARCHAR (5));
insert into coustomers values(42,'priti','upadhyay','7218696587','priti3456@gmail.com','jaripatka','nagpur','maharashtra','44001')
insert into coustomers values(56,'priyanka','upadhyay','7218696587','priyanka789@gmail.com','mankapur','nagpur','maharashtra','44004')
insert into coustomers values(41,'gayatri','sable','7218696587','gayatri678@gmail.com','sadar','nagpur','maharashtra','44006')
insert into coustomers values(89,'komal','upadhyay','7218696587','komal89@gmail.com','lic','nagpur','maharashtra','4556')
insert into coustomers values(23,'sonam','upadhyay','7218696587','sonam45@gmail.com','nara','nagpur','maharashtra','0987')
insert into coustomers values(90,'aarti','upadhyay','7218696587','aarti0@gmail.com','indora','nagpur','maharashtra','2345')
select*from coustomers
------------------------------------------------------------------------------------------------------------------

create table store(store_id int identity(1,1) primary key,
store_name varchar(200) not null,
phone varchar(12),
email varchar(35),
street varchar(200),
city varchar (200),
state varchar(30),
zip_code varchar(10));
insert into store(store_name,phone,email,street,city,state,zip_code)
values('mina','1234567890','mina@12345','mankapur','nagpur','maharashtra','5678')

insert into store(store_name,phone,email,street,city,state,zip_code)
values('riya','7895634790','riya@12345','sadar','nagpur','maharashtra','78978')
--insert into stores(phone,email) values('0987654390','tina3456@gmail.com')
insert into store(store_name,phone,email) 
values('radhika','8907654234','radhika7896@gmail.com')
insert into store values('tina','1234567890','tina12345@gmail.com','lic','nagpur','maharashtra','90876')
select*from  store

-----------------------------------------------------------------------------------------------------------

create table staff(staff_id INT IDENTITY (1, 1) PRIMARY KEY,
first_name VARCHAR (50) NOT NULL,
last_name VARCHAR (50) NOT NULL,
email VARCHAR (255) NOT NULL UNIQUE,
phone VARCHAR (25),
active tinyint NOT NULL,
store_id INT NOT NULL,
manager_id INT,
FOREIGN KEY (staff_id)
REFERENCES store (store_id)

);
insert into staff values('priyanka','upadhyay','priyanka765@gmail.com','7655436908',200,5907,2349)
insert into staff values('priti','upadhyay','priti789@gmail.com','5465687990',200,5907,2349)
insert into staff values('riya','pathak','riyap908@gmail.com','0986532189',210,5907,2349)
insert into staff values('komal','sharma','komal123@gmail.com','8765231467',199,5907,2349)
select*from staff

-----------------------------------------------------------------------------------------------------------------------
create table categories(category_id int identity(1,1) primary key,
                        catogary_name varchar(200) not null) 

insert into categories values('priyanka upadhyay')
insert into categories values('priti upadhyay')
insert into categories values('gayatri  sable')
insert into categories values('kajal sharma')
insert into categories values('sonam upadhyay')
insert into categories values('komal upadhyay')
select * from categories 

------------------------------------------------------------------------------------------------------

create table brands(brand_id int identity(1,1) primary key,
                        brand_name varchar(200) not null) 
insert into brands values('Google')
insert into brands values('Apple')
insert into brands values('Nike')
insert into brands values('Adidas')
insert into brands values('BMW')
insert into brands values('Sumsung')
insert into brands values('Nokia')
insert into brands values('Philips')

select*from brands

-----------------------------------------------------------------------------------------
create table prdu(
product_id int primary key,
product_name varchar(30),
brand_id int ,
category_id int ,
model_year int,
list_price decimal (10,2)
);
insert into prdu values(20,'passion pro',300,50,1999,59.78)
insert into prdu values(21,'splender pro',301,51,1999,789.56)
insert into prdu values(22,'spelender',302,52,1999,3456.90)
insert into prdu values(23,'shine',303,53,1999,234.97)
insert into prdu values(24,'unicorn',304,54,1999,3678.98)
insert into prdu values(25,'livo',305,55,1999,1234.78)
insert into prdu values(26,'vaspa',306,56,1999,234.97)
insert into prdu values(27,'pleasere',307,57,1999,8956.34)

select*from prdu
------------------------------------------------------------------------------
create table order1(
order_id INT PRIMARY KEY,
customer_id INT,
order_status tinyint NOT NULL,
-- Order status: 1 = Pending; 2 = Processing; 3 = Rejected; 4 = Completed
order_date DATE NOT NULL,
required_date DATE NOT NULL,
shipped_date DATE,
store_id INT NOT NULL,
staff_id INT NOT NULL,
);
insert into order1 values(1,45,2,'2021-7-12','2021-7-15','2021-7-19',32,789)
insert into order1 values(02,78,1,'2021-7-12','2021-7-15','2021-7-19',32,789)
insert into order1 values(03,23,3,'2021-7-12','2021-7-15','2021-7-19',32,789)
insert into order1 values(04,90,4,'2021-7-12','2021-7-15','2021-7-19',32,789)
select *from order1

---------------------------------------------------------------------------------------------------