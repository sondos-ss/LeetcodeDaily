# Write your MySQL query statement below
SELECT 
   c.name
FROM
customer c
WHERE
c.referee_id!=2 OR c.referee_id is NULL