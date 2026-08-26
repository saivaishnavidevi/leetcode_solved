# Write your MySQL query statement below
select distinct(num) as ConsecutiveNums
FROM (
    SELECT id, num,
           LAG(num) OVER (ORDER BY id) AS prev1,
           LAG(num, 2) OVER (ORDER BY id) AS prev2
    FROM Logs
) t
where num=prev1 and num=prev2;