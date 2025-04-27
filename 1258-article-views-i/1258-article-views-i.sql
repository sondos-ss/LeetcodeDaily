# Write your MySQL query statement below
SELECT DISTINCT
    v.author_id AS id
from
views v
where
v.author_id=v.viewer_id
order by
author_id