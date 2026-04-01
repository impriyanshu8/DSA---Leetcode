# Write your MySQL query statement below
select EmployeeUNI.unique_id, Employees.name
From Employees
Left Join EmployeeUNI
ON EmployeeUNI.id = Employees.id