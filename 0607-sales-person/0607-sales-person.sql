# Write your MySQL query statement below
select distinct s.name
from salesperson s, company c,orders o
where s.sales_id not in (select s.sales_id
from salesperson s, company c,orders o
where s.sales_id=o.sales_id and c.com_id = o.com_id and c.name ='RED');