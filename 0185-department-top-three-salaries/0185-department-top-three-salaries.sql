# Write your MySQL query statement below
SELECT Department.name as Department, Employee.name as Employee ,Employee.salary FROM Employee 
JOIN Department on Employee.departmentId=Department.id
where 3>(
    SELECT COUNT(DISTINCT e2.salary)
    FROM Employee e2
    WHERE e2.departmentId=Employee.departmentId AND e2.salary>Employee.salary
);