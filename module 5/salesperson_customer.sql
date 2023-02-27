create database salesperson_customer;
use salesperson_customer;

create table salesperson(
s_no int,
s_name varchar(20),
city varchar(20),
comm float,
primary key(s_no)
);
insert into salesperson(s_no , s_name , city , comm) values("1001","peel","london",".12");
insert into salesperson(s_no , s_name , city , comm) values("1002","serres","san jose",".13");
insert into salesperson(s_no , s_name , city , comm) values("1004","motika","london",".11");
insert into salesperson(s_no , s_name , city , comm) values("1007","rafkin","barcelona",".15");
insert into salesperson(s_no , s_name , city , comm) values("1003","axelroad","new york",".1");

-- a) All orders for more than $1000.
select s_no < 1000 from customer;

-- b) Names and cities of all salespeople in London with commission above 0.12
select s_name,city from salesperson where comm > 0.12 and city = 'london';

-- c) All salespeople either in Barcelona or in London
select s_name,city from salesperson where city in ('barcelona','london');

-- d) All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).
select s_name,comm from salesperson where comm > 0.10 and comm < 0.12;

-- e) All customers excluding those with rating <= 100 unless they are located in Rome
select c_name from customer where rating <= 100 or city = 'roome';
-- -------------------------------------------------------------------------------------------------------------------------------
create table customer(
cnm int,
c_name varchar(20),
city varchar(20),
rating int,
s_no int
);
insert into customer(cnm , c_name , city , rating , s_no)values("201","hoffman","london","100","1001");
insert into customer(cnm , c_name , city , rating , s_no)values("202","giovanne","roe","200","1003");
insert into customer(cnm , c_name , city , rating , s_no)values("203","liu","san jose","300","1002");
insert into customer(cnm , c_name , city , rating , s_no)values("204","grass","barcelona","100","1002");
insert into customer(cnm , c_name , city , rating , s_no)values("206","clemens","london","300","1007");
insert into customer(cnm , c_name , city , rating , s_no)values("207","pereira","roe","100","1004");
-- ------------------------------------------------------------------------------------------------------------------------------