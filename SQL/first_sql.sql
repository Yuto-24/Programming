CREATE TABLE departments (
  department_id int primary key,
  department_name varchar(20)
);

CREATE TABLE employees (
  employee_id int primary key,
  department_id int,
  name varchar(20),
  age int,
  CONSTRAINT fk_department_id
    FOREIGN KEY (department_id) 
    REFERENCES departments (department_id)
    ON DELETE RESTRICT ON UPDATE RESTRICT
);