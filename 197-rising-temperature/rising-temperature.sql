# Write your MySQL query statement below
select today.id from 
Weather today 
cross join weather yesterday
where DATEDIFF(today.recordDate,yesterday.recordDate) = 1
    AND today.temperature > yesterday.temperature