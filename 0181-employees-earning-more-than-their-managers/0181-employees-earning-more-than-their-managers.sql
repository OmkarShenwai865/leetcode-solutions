# Write your MySQL query statement below
select e.name as Employee from employee e
LEFT JOIN employee m
ON e.managerid = m.id
where e.salary>m.salary;