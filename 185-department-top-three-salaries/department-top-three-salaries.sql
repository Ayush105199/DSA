# Write your MySQL query statement below
-- select d.name as Department,e.name as Employee ,e.salary as Salary
-- from Employee as e 
-- inner join 
-- Department as d 
-- on e.departmentId=d.id 
-- where (e.departmentId,e.salary) IN
-- (select departmentId,max(salary) 
-- from Employee as e Group by e.departmentId)
SELECT Department, Employee, Salary
FROM (
    SELECT 
        d.name AS Department,
        e.name AS Employee,
        e.salary AS Salary,
        DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS rnk
    FROM Employee e
    JOIN Department d ON e.departmentId = d.id
) AS temp
WHERE rnk <= 3;