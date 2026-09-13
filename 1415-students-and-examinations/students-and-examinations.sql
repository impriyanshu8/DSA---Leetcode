# Write your MySQL query statement below
WITH Freq_Table AS(
    SELECT student_id,subject_name,COUNT(*) as attended_exams
         FROM Examinations
         GROUP BY student_id,subject_name

),
Cross_Join_Table AS(
    SELECT student_id,student_name,subject_name
         FROM Students
         CROSS JOIN
         Subjects
)
SELECT CJ.student_id,CJ.student_name,CJ.subject_name,COALESCE(attended_exams,0) as attended_exams
     FROM 
     Cross_Join_Table CJ
     LEFT JOIN
     Freq_Table FT
     ON 
     FT.student_id=CJ.student_id AND FT.subject_name=CJ.subject_name

     ORDER BY student_id,subject_name


