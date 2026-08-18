# Write your MySQL query statement below
select e.name as Employee
from employee e join employee e1
on e.managerid=e1.id and e.salary>e1.salary;