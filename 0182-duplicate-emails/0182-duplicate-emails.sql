# Write your MySQL query statement below
SELECT email FROM person
group by email
HAVING count(email)>1;