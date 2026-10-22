# Write your MySQL query statement below
SELECT d.name AS department,
e.name AS Employee,
e.salary AS  Salary
FROM Employee e
JOIN Department d on e.departmentId=d.id
WHERE e.salary=(
    SELECT max(salary)
    FROM employee
    WHERE departmentid=e.departmentId
);