# PI-Calculator
A program that estimates the constant pi. Depending on how large of sample size is inserted the more accurate the estimation will be.
Generates random numbers between 0 and 1 in a sqaure grid theoritically with a circle inside the square. If the distance from the orgin is <= 1 then we know 
the point is inside the circle and if the point > 1 then we knwo its outside circle but still inside the square. So if we take the ratio of the area of circle
to the area of the sqaure: πr^2 / (2r)^2 =  πr^2 / 4r^2 = π/4. If we take this ratio and set it equal to the ratio of the number points in circle to number of points
so: π/4 = points_in_circle/points_total , the ratio will roughly be the same. So then inorder to get pi we just multiply (points_in_circle/points_total) by 4 and 
that'll leave pi by itself and we will get a rough estimate of pi.
