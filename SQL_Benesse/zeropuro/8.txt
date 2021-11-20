select
	consumer_tbl.name,
	consumer_tbl.address
from
	consumer_tbl,
	(
		select
			address,
			count()
		from
			consumer_tbl
		group by
			address
		having
			count() >= 3
	) as temp
where
	consumer_tbl.address = temp.address