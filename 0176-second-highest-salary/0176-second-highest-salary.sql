# Write your MySQL query statement below
-- select MAX(salary) as SecondHighestSalary from Employee
-- where salary < (
--     select MAX(salary) from employee
-- );

select MAX(salary) as SecondHighestSalary from employee e1
where 1 = (
    select count(DISTINCT e2.salary) from employee e2
    where e2.salary > e1.salary
);