# SQL

* student_tbl
  * student_id
  * student_name
  * email
  * tel
  * birthday
  * join_date
  * school_year
  * school_name
* item_tbl
  * item_id
  * item_name
* teacher_tbl
  * teacher_id
  * teacher_name
  * email
  * tel
  * item_id
* course_tbl
  * student_id
  * item_id
* test_tbl
  * test_id
  * test_name
  * test_date
* test_score_tbl
  * test_id
  * student_id
  * item_id
  * score





# 構成

* student_tbl
  * **学籍番号**
  * **名前**
  * **school_year**
  * **school_name**
* item_tbl
  * item_id
  * **item_name**
* course_tbl
  * student_id
  * item_id
* test_tbl
  * test_id
  * **test_name**
  * **test_date**
* test_score_tbl
  * test_id
  * student_id
  * item_id
  * **score**

