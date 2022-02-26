-- write your code in PostgreSQL 9.4
SELECT
	ACC.name -- ACC.accumulation,
	-- ACC.turn
FROM
	(
		SELECT
			name,
			SUM(weight) OVER(
				ORDER BY
					turn
			) AS accumulation,
			turn
		FROM
			line
	) AS ACC
WHERE
	ACC.accumulation <= 1000
ORDER BY
	ACC.turn DESC
FETCH FIRST
	1 ROWS ONLY