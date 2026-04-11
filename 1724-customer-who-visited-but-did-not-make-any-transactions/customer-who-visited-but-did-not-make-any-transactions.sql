# Write your MySQL query statement below
select a.customer_id, COUNT(a.visit_id) AS count_no_trans
from Visits a
Left Join Transactions b
ON a.visit_id = b.visit_id 
where transaction_id IS NULL
Group By a.customer_id;

