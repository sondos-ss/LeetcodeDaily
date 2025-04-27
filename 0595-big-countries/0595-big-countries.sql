# Write your MySQL query statement below
SELECT
   c.name,
   c.population,
   c.area
FROM
world c
WHERE
area>=3000000 or population>=25000000
