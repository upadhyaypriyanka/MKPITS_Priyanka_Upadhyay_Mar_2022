create table products(product_id int identity primary key,
product_name varchar(250) not null,
unit_price decimal(10,2) CHECK(unit_price > 0),
    discounted_price decimal(10,2) CHECK(discounted_price > 0),
    CHECK(discounted_price < unit_price)
);

insert into products values('mouse',120.56,50.67);
insert into products values('mouse',140.56,50.68);
insert into products values('keyboard',156.56,60.67);
insert into products values('monitor',500.56,65.67);
--insert into products values('mouse',0,0);
--insert into products values('mouse',50.45,120.90);
select*from products;


-----------------------------------OR----------------------------------------

create table products1 (product_id int identity primary key,
product_name varchar(250) not null,
unit_price decimal(10,2), 
    discounted_price decimal(10,2),
	CHECK(unit_price > 0),
	CHECK(discounted_price > 0),
    CHECK(discounted_price < unit_price)
	----------------OR------------------
	--CHECK(unit_price > 0),
	--CHECK(discounted_price > 0 AND discounted_price < unit_price),
    
	);
insert into products1 values('mouse',120.56,50.67);
insert into products1 values('mouse',140.56,50.68);
insert into products1 values('keyboard',156.56,60.67);
insert into products1 values('monitor',500.56,65.67);
select*from products1;
select*from products;
alter table products1 add valid_price int ;
alter table products1 drop column valid_price ;