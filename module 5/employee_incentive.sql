create database employee_incentive;
use employee_incentive;

create table Employee (
Employee_Id int ,
First_Name varchar(30),
Last_Name varchar(30),
Salary int,
Joinig_Date varchar(30),
Department varchar(30),
primary Key (Employee_Id)
);
create table Employee_backup(
Emp_Id int ,
first_Name varchar(20),
Last_Name varchar(20),
Salary int,
Joinig_Date varchar(20),
Department varchar(20)
);

insert into Employee(Employee_Id , First_Name , Last_Name , Salary , Joinig_Date , Department) 
values
(1,"John","Abraham",1000000,"2013-01-01 12:00:00","Banking"),
(2,"Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
(4,"Torn","Jose",600000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"TestName1","123",650000,"2013-01-01 12:00:00","Services"),
(8,"TestNmae2","Lname%",600000,"2013-02-01 12:00:00","Insurance");

-- a) Get First_Name from employee table using Tom name “Employee Name”.
select first_name "employee name" from employee;

-- b) Get FIRST_NAME, Joining Date, and Salary from employee table.
select First_Name, Joinig_Date ,Salary from Employee;

-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending? 
select * from Employee order by First_Name ,Salary desc;

-- d) Get employee details from employee table whose first name contains ‘J’
select * from Employee where First_Name like 'J%'; 

-- e) Get department wise maximum salary from employee table order by salary ascending?
select department, max(salary) maxsalary from employee group by department order by maxsalary asc;

-- f)Select first_name, incentive amount from employee and incentives table for those employees who have incentives and incentive amount greater than 3000?
select first_name,incentive_amount from employee A inner join incentive B on A.employee_id=employee_ref_id and incentive_amount>3000;
 
-- g)Create After Insert trigger on Employee table which insert records in view table?
SELECT * FROM employee_backup;    
-- ------------------------------------------------------------------------------------- 
create table Incentive (
Employee_ref_Id int,
Incentive_date varchar(20),
Incentive_Amount int,
foreign key (Employee_ref_Id) references Employee (Employee_Id)

);

insert into Incentive(Employee_ref_Id , Incentive_date , Incentive_Amount)
values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);
