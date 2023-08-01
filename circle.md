Midpoint Circle Drawing Algorithm:
1. Initialize the center coordinates (xc, yc) and the radius (r) of the circle.
2. Set the initial value of the decision parameter P to 1 - r.
3. Initialize two variables, x and y, to 0 and r respectively.
4. Repeat the following steps until x is less than or equal to y:
   a. Plot the eight points (xc + x, yc + y), (xc - x, yc + y), (xc + x, yc - y), (xc - x, yc - y),
      (xc + y, yc + x), (xc - y, yc + x), (xc + y, yc - x), (xc - y, yc - x) using the `putpixel` function.
   b. Increment the value of x.
   c. If the decision parameter P is less than 0, update it as P = P + 2*x + 3.
   d. If the decision parameter P is greater than or equal to 0, decrement the value of y and update P as P = P + 2*(x - y) + 5.

5. The circle with the center (xc, yc) and radius r is now drawn using the Midpoint Circle Drawing Algorithm.
