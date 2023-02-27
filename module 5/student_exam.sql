create database Student_Exam;
use Student_Exam;

create table student (
Roll_No int ,
Student_Name varchar(30),
Branch varchar(30),
primary key (Roll_No)
);
insert into student(Roll_No, student_Name , Branch) values(1, "Jay", "computer science");
insert into student(Roll_No, student_Name , Branch) values(2, "suhani", "electronic and com");
insert into student(Roll_No, student_Name , Branch) values(3, "kriti", "electronic and com");
drop table exam;
create table exam ( 
Roll_No int , 
S_Code varchar(10),
Marks int,
P_Code varchar(10),

primary key (S_Code)
);

insert into exam(Roll_No,S_Code , Marks , P_Code) values(1,"CS11",50,"CS");
insert into exam(Roll_No,S_Code , Marks , P_Code) values(1,"CS12",60,"CS");
insert into exam(Roll_No,S_Code , Marks , P_Code) values(2,"EC101",66,"EC");
insert into exam(Roll_No,S_Code , Marks , P_Code) values(2,"EC102",70,"EC");
insert into exam(Roll_No,S_Code , Marks , P_Code) values(3,"EC103",45,"EC");
insert into exam(Roll_No,S_Code , Marks , P_Code) values(3,"EC104",50,"EC");
