# Write your MySQL query statement below
SELECT
   t.tweet_id
FROM
tweets t
WHERE
char_length(t.content)>15
