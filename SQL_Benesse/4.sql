SELECT
	student_name,
	birthday
FROM
	student_tbl
WHERE
	DATE_FORMAT(student_tbl.birthday, '%c') = DATE_FORMAT(CURDATE(), '%c')