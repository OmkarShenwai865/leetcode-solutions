# Write your MySQL query statement below
update salary
SET sex = CASE
WHEN sex = 'm' then 'f'
when sex = 'f' then 'm'
else sex end;