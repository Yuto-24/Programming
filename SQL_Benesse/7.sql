SELECT
	student_name,
	-- test_date1103.item_name,
	score
FROM
	student_tbl,
	(
		SELECT
			test_score_tbl.student_id,
			-- item_name,
			score
		FROM
			test_tbl,
			test_score_tbl,
			item_tbl -- (
			-- 	SELECT
			-- 		item_tbl.item_id
			-- 	FROM
			-- 		course_tbl,
			-- 		item_tbl
			-- 	WHERE
			-- 		course_tbl.item_id = item_tbl.item_id
			-- 		AND item_tbl.item_name = '数学'
			-- ) as math
		WHERE
			test_tbl.test_date = '20-11-03'
			AND test_score_tbl.item_id = item_tbl.item_id
			AND item_tbl.item_name = '数学'
			AND score <= 30
	) as test_date1103
WHERE
	test_date1103.student_id = student_tbl.student_id