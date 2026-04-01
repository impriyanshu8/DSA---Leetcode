# Write your MySQL query statement below
select b.unique_id, a.name
From Employees a
Left Join EmployeeUNI b
ON a.id = b.id