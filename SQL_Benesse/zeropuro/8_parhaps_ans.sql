-- 答えらしい
SELECT
	consumer_tbl.name,
	consumer_tbl.address
FROM
(
		SELECT
			address,
			COUNT()
		FROM
			consumer_tbl
		GROUP BY
			address
		HAVING
			COUNT() >= 3
	) AS A,
	consumer_tbl
WHERE
	A.address = consumer_tbl.address