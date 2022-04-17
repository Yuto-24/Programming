SELECT
	AVG(grade1.score)
FROM
	item_tbl,
	(
		SELECT
			*
		FROM
			student_tbl,
			test_score_tbl
		WHERE
			student_tbl.school_year = 1
	) as grade1 -- ,
	-- (
	-- 	SELECT
	-- 		*
	-- 	FROM
	-- 		student_tbl
	-- 		test_score_tbl
	-- 	WHERE
	-- 		student_tbl.school_year = 2
	-- ) as grade2,
	-- (
	-- 	SELECT
	-- 		*
	-- 	FROM
	-- 		student_tbl
	-- 		test_score_tbl
	-- 	WHERE
	-- 		student_tbl.school_year = 3
	-- ) as grade3 -- WHERE
	-- test_tbl.test_date = '20-11-03'
	-- AND test_score_tbl.item_id = item_tbl.item_id
	-- AND item_tbl.item_name = '数学'
	-- AND score <= 30;
;

SELECT
	grade1.school_year,
	AVG(grade1.score)
FROM
	item_tbl,
	(
		SELECT
			student_tbl.student_id,
			student_name,
			school_year,
			school_name,
			test_score_tbl.test_id,
			score
		FROM
			student_tbl,
			test_score_tbl
		WHERE
			student_tbl.student_id = test_score_tbl.student_id
			AND student_tbl.school_year = 1
	) as grade1