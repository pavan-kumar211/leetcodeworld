# Write your MySQL query statement below
select employeeuni.unique_id ,employees.name 
from Employees 
left join EmployeeUNI 
on Employees.id = EmployeeUNI.id