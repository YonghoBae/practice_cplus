-- 코드를 작성해주세요
SELECT COUNT(*) AS FISH_COUNT
FROM FISH_INFO F
JOIN FISH_NAME_INFO FN ON F.FISH_TYPE = FN.FISH_TYPE
WHERE FISH_NAME = 'BASS' OR FISH_NAME = 'SNAPPER'; 