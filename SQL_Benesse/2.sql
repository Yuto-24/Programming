SELECT
	student_name,
    student_tbl.student_id,
    school_year,
    school_name
FROM
	student_tbl,
	(
		SELECT
			student_id,
			item_tbl.item_name
		FROM
			course_tbl,
			item_tbl
		WHERE
			course_tbl.item_id = item_tbl.item_id
			AND item_tbl.item_name = '数学'
	) as math
WHERE
	math.student_id = student_tbl.student_id
	AND school_name = 'あいう中学校'
	AND school_year = 1
