USE joinDBCOLLEGE;



-- INNER JOIN

SELECT * FROM student AS st
INNER JOIN course AS crs
ON st.st_id = crs.st_id;



-- LEFT JOIN

SELECT * FROM student AS st
LEFT JOIN course AS crs
ON st.st_id = crs.st_id;


-- RIGHT JOIN

SELECT * FROM student AS st
RIGHT JOIN course AS crs
ON st.st_id = crs.st_id;




-- FULL JOIN  ---> VS code me wrong

(SELECT * FROM student AS st
LEFT JOIN course AS crs
ON st.st_id = crs.st_id)

UNION

(SELECT * FROM student AS st
RIGHT JOIN course AS crs
ON st.st_id = crs.st_id);


-- LEFT EXCLUSIVE JOIN

SELECT * FROM student AS st
LEFT JOIN course AS crs
ON st.st_id = crs.st_id
WHERE crs.st_id IS NULL;



-- RIGHT EXCLUSIVE JOIN

SELECT * FROM student AS st
RIGHT JOIN course AS crs
ON st.st_id = crs.st_id
WHERE st.st_id IS NULL;

