# Write your MySQL query statement below
SELECT max(salary) as SecondHighestSalary
From employee
where salary <( SELECT max(salary) from employee LIMIT 1);
