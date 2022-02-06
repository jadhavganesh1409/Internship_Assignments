.header on
.width 0 18 18 15
.mode column


PRAGMA foreign_keys = ON;


.print
.print
.print Creating Department table
.print
---create department table
create table department(depId int primary key,Deptname varchar(40) not null,HOD varchar(20) not null);


.print
.print Creating Teachers table
.print



-- creating teachers table and adding values
create table Teachers
(tId int primary key,tName varchar(50) not null,subject varchar(30)not null,
address varchar(30) not null,salary int not null,depId int, FOREIGN KEY(depId) REFERENCES Department(depId));

.print
.print Insert values into department table
.print

insert into department values(101,'CS','Anjali mam');
insert into department values(102,'DS','Laura mam');
insert into department values(103,'CA','Paula mam');
insert into department values(104,'IMCA','Kate mam');
insert into department values(105,'chemistry','Anuradha mam');
insert into department values(106,'microbiology','Swati mam');


.print
.print Inserting Values in Teachers
.print


insert into Teachers values(101,"aparana mam","data mining","pune",40797,101);
insert into Teachers values(102,"anjali mam","python","pune",50464,102);
insert into Teachers values(103,"ashok sir","microbiology","nashik",60195,103);
insert into Teachers values(104,"aarti mam","biotech","nashik",500000,104);
insert into Teachers values(105,"nandan sir","organic chemistry","nagar",30500,105);
insert into Teachers values(106,"pandit madam","inorganic chemistry","mumbai",400000,106);
insert into Teachers values(107,"narendra sir","quantum mechanics","satara",20000,104);
insert into Teachers values(108,"uma madam","classical mechanics","aurangabad",20000,103);
insert into Teachers values(109,"imran sir","statistical mechanics","dhule",20000,102);
insert into Teachers values(110,"bhupesh sir","statistical mechanics","nagar",35000,101);
insert into Teachers values(111,"nilima mam","microbiology","dhule",20000,103);

-- Example of select
.print
.print Example of SELECT clause :
.print
select depId,Deptname from department;
.print
.print
select * from department;


----Update
.print
.print Example of Update clause :
.print
update department set HOD='Nair mam' where Deptname='CA';
.print
.print
select * from Department;


----delete
.print
.print Example of delete clause :
.print
delete  from Teachers  where depID='101';
delete from department where depID='101';
.print
.print
select * from department;


----alter
.print
.print Example of alter clause :
.print
alter table department add employeecount int;
alter table Teachers add experience int;
.print
.print
select * from Teachers;
.print
.print
.print
select * from department;





----count
.print
.print Example of count clause :
.print
.print count of teachers
.print
.print
select count(*) from Teachers;
.print
.print


----sum
.print
.print Example of sum clause :
.print
.print sum of salary of teachers
.print
.print
select sum(salary) from Teachers;
.print
.print


----max
.print
.print Example of max clause :
.print
.print max salary of teachers
.print
.print
select max(salary) from Teachers;
.print
.print


----avg
.print
.print Example of avg clause :
.print
.print avg of teachers
.print
.print
select avg(salary) from Teachers;
.print
.print

----min
.print
.print Example of min clause :
.print
.print min salary of teachers
.print
.print
select min(salary) from Teachers;
.print
.print


----group by
.print
.print Example of group by clause :
.print
.print
.print
select * from department where depID>101 group by Deptname;
.print
.print

----having
.print
.print Example of having clause :
.print
.print
.print
select * from department where Deptname like '%A' group by Deptname having depID>102;
.print
.print


----order by
.print
.print Example of order by clause :
.print
.print
.print
select distinct(*) from Teachers where depID>102 and tName like '%h%'order by tName;
.print
.print


----not
.print
.print Example of Not clause :
.print
.print
select * from Teachers where depID>102 not in(select  tName from Teachers where tName='imran sir' );
.print
.print



----OR
.print
.print Example of OR clause :
.print
.print
.print
select * from Teachers where depID>105 OR tName like '__m%'order by tName;
.print
.print


----drop
.print
.print Example of DROP clause :
.print
.print
.print Creating table teachers_dept
create table teachers_dept(depID int,tName varchar(20));
drop table teachers_dept;
.print

select * from teachers_dept;

.print Table teachers_dept dropped successfully




----DESCENDING and LIMIT
.print
.print Example of DESCENDING and LIMIT clause :
.print
.print
select tName,salary from Teachers order by salary  desc ;
.print
.print
.print Printing Second and Third Highest salary
.print
select tName,salary from Teachers order by salary desc limit 1,2;

.print
.print


----INNER JOIN and LEFT join
.print
.print Example of LEFT JOIN clause :
.print
.print

select Teachers.tName,department.depID,Teachers.salary from department 
left JOIN Teachers 
on 
Teachers.depID=department.depID;  
.print
.print
.print Example of INNER JOIN :
select Teachers.tName,department.depID,Teachers.salary from department 
INNER JOIN Teachers 
on 
Teachers.depID=department.depID;  
.print
.print





----RANDOM
.print
.print Example of RANDOM clause :
.print
.print
 select tName,address from Teachers order by RANDOM () limit 3;
.print


----CASE
.print
.print
.print Example of CASE clause
.print
SELECT depId,tName,
       CASE address 
           WHEN 'nashik' 
               THEN 'Maharashtra' 
           WHEN 'mumbai'
                THEN 'Mumbai Suburban' 
       END Addressgroup
FROM 
    Teachers
ORDER BY 
    depID;



.print
.print
