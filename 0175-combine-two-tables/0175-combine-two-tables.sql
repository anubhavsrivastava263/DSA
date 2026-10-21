# Write your MySQL query statement below
SELECT person.firstName,person.lastName,address.city,address.state
FROM Person
LEFT JOIN address
on person.personId=address.personId;