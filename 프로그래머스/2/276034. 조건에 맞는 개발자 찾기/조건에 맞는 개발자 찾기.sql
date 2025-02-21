-- 코드를 작성해주세요

SELECT DISTINCT D.ID, D.EMAIL, D.FIRST_NAME, D.LAST_NAME
FROM SKILLCODES S, DEVELOPERS D
WHERE (D.SKILL_CODE & S.CODE) = S.CODE AND (S.NAME = 'C#' OR S.NAME = 'Python')
ORDER BY D.ID ASC;