Midpoint Ellipse Drawing Algorithm Algorithm:

1. Initialize the center coordinates (xc, yc) and the semi-major (a) and semi-minor (b) axis lengths of the ellipse.
2. Calculate the squares of a and b: `a_squared = a * a`, `b_squared = b * b`.
3. Calculate the constants: `two_a_squared = 2 * a_squared`, `two_b_squared = 2 * b_squared`.
4. Calculate the constants: `four_a_squared = 4 * a_squared`, `four_b_squared = 4 * b_squared`.
5. Set the initial value of the decision parameter d to: `d = b_squared - a_squared * b + a_squared / 4`.
6. Initialize two variables, x and y, to 0 and b respectively.
7. While `two_b_squared * x` is less than `two_a_squared * y`:
   a. Plot the four points: `(xc + x, yc + y)`, `(xc - x, yc + y)`, `(xc + x, yc - y)`, `(xc - x, yc - y)` using the `putpixel` function to draw the four quadrants of the ellipse.
   b. If the decision parameter d is greater than or equal to 0, decrement y by 1 and update d as: `d = d - four_a_squared * y`.
   c. Increment x by 1 and update d as: `d = d + two_b_squared * x + b_squared`.
8. Calculate a new value for the decision parameter d using the equation: `d = b_squared * (x + 0.5) * (x + 0.5) + a_squared * (y - 1) * (y - 1) - a_squared * b_squared`.
9. While y is greater than or equal to 0:
   a. Plot the four points: `(xc + x, yc + y)`, `(xc - x, yc + y)`, `(xc + x, yc - y)`, `(xc - x, yc - y)` using the `putpixel` function to draw the four quadrants of the ellipse.
   b. If the decision parameter d is less than or equal to 0, increment x by 1 and update d as: `d = d + four_b_squared * x`.
   c. Decrement y by 1 and update d as: `d = d + two_a_squared * y - a_squared`.

10. The ellipse with the center (xc, yc) and semi-major axis length a, and semi-minor axis length b, is now drawn using the Midpoint Ellipse Drawing Algorithm.
