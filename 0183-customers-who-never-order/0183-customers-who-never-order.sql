# Write your MySQL query statement below
select c.name as Customers from customers c
LEFT JOIN Orders o 
ON c.id = o.customerid
where o.customerid is null;