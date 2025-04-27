select
p.product_name,
e.year,
e.price
from
product p
join
sales e
on
p.product_id=e.product_id