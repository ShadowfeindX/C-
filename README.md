# Point to Line
***
### Info
Let l be a line in the x-y plane. If l is a vertical line, its equation is x = a
for some real number a. Suppose l is not a vertical line and its slope is m.
Then the equation of l is y = mx + b, where b is the y-intercept. If l passes
through the point (x0, y0,), the equation of l can be written as
`y – y0 = m(x – x0)`. If (x1, y1) and (x2, y2) are two points in the x-y plane
and x1 ≠ x2, the slope of the line passing through these points is
`m = (y2 – y1) / (x2 – x1)`. Write a program that prompts the user to enter two
points in the x-y plane. The program outputs the equation of the line and uses
if statements to determine and output whether the line is vertical, horizontal,
increasing, or decreasing. If l is a nonvertical line, output its equation in
the form `y = mx + b`.

### Implementation
> These are the constants and functions used to calculate the program output.

```
>> functions have been provided
```

## Input
***
> The following user data is needed to calculate the program output.

+ Point A -> (x,y)
+ Point B -> (x,y)

#### Example
```c++
"Enter A Point:" (-4,-1)
"Enter B Point:" (2,2)
```

## Output
***
> The following system data is output by the program.

+ Linear Function -> y = mx + b
+ Slope of Function -> string

### Example
```c++
"Line AB:" y = 0.5x + 1
"The function is increasing."
```

## Test Data
|        | Point A | Point B |   Line AB    |
|:------:|:-------:|:-------:|:------------:|
| Test 1 | (-4,-2) |  (2,2)  | y = x/2 + 1  |
| Test 2 |  (8,12) |  (2,6)  |   y = x + 4  |
| Test 3 | (0.5,3) |  (1,5)  |  y = 4x + 1  |
