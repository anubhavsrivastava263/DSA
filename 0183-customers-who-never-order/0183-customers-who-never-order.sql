# Write your MySQL query statement below
SELECT name as customers
From customers
LEFT JOIN orders on customers.id=orders.customerId
WHERE orders.customerId is NULL;