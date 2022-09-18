CREATE TABLE vendor_groups (
    group_id INT IDENTITY PRIMARY KEY,
    group_name VARCHAR (100) NOT NULL
);

CREATE TABLE vendors (
        vendor_id INT IDENTITY PRIMARY KEY,
        vendor_name VARCHAR(100) NOT NULL,
        group_id INT NOT NULL,
        CONSTRAINT fk_group FOREIGN KEY (group_id) 
        REFERENCES vendor_groups(group_id)
);

select * from vendor_groups
--insert into vendors(vendor_name,group_id) values('priyanka',234)
insert into vendor_groups values ('mkpits')
select*from vendor_groups
insert into vendors(vendor_name,group_id) values('gayatri',1)
select * from vendors
insert into vendors(vendor_name,group_id) values('komal',2)
insert into vendor_groups values('neet')
select*from vendor_groups
insert into vendors(vendor_name,group_id) values('neha',2)
insert into vendors(vendor_name,group_id) values('khushi',2)
--insert into vendor_groups(group_id,group_name) values(234,'pallavi')
