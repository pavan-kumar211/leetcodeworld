SELECT w2.id
FROM weather AS w1
JOIN weather AS w2 
ON DATEDIFF(w2.recordDate, w1.recordDate) = 1
WHERE w1.temperature < w2.temperature;
