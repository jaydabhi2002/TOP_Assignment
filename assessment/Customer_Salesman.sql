create database Customer_Salesman;
use Customer_Salesman;

create table  Customer(
customer_id int,
cust_name varchar(20),
city varchar(20),
grade int,
salesman_id int
);
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3002","nick rimando", "newyork","100","5001");
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3007","brad davis", "newyork","200","5001");
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3005","graham zusi", "california","200","5002");
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3008","julian green", "london","300","5002");
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3004","fabian johnson", "paris","300","5006");
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3009","geoff cameron", "berlin","100","5003");
insert into customer(customer_id,cust_name,city,grade,salesman_id)values("3003","jozy altidor", "moscow","200","5007");
insert into customer(customer_id,cust_name,city,salesman_id)values("3001","brad guzan", "london","5005");

SELECT  C.Cust_name , C.City , Salesman_Name , S.Commission FROM Customer AS C join Salesman AS S on S.Salesman_Id = C.Salesman_Id;
-- ---------------------------------------------------------------------------------------------------------------------------------------
create table salesman(
salesman_id int,
salesman_name varchar(20),
city varchar(20),
commission float
);
insert into salesman(salesman_id,salesman_name,city,commission)values("5001","james hoog", "new york","0.15");
insert into salesman(salesman_id,salesman_name,city,commission)values("5002","nail knite", "paris","0.13");
insert into salesman(salesman_id,salesman_name,city,commission)values("5005","pit alex", "london","0.11");
insert into salesman(salesman_id,salesman_name,city,commission)values("5006","mc lyon", "paris","0.14");
insert into salesman(salesman_id,salesman_name,city,commission)values("5007","paul adam", "rome","0.13");
insert into salesman(salesman_id,salesman_name,city,commission)values("5003","lauson hen", "san jose","0.12");

-- ----------------------------------------------------------------------------------------------------------------------------------

