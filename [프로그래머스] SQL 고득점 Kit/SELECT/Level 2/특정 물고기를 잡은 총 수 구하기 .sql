-- https://school.programmers.co.kr/learn/courses/30/lessons/298518/

SELECT COUNT(*) AS FISH_COUNT
FROM FISH_INFO FISH
         JOIN FISH_NAME_INFO NAME
              ON FISH.FISH_TYPE = NAME.FISH_TYPE
WHERE NAME.FISH_NAME IN ('BASS', 'SNAPPER');