# Student Grade
***
### Info

Write a program that reads a student name followed by five test scores.
The program should output the student name, the five test scores, and
the average score. Output the average test score with two decimal places.
The data to be read is stored in a file call test.txt. The output should
be stored in a file called testavg.out.

### Implementation
> These are the constants and functions used to calculate the program output.

```
total_score += score_1
>> this function is looped 5 times

test_average = total_score / 5
```

## Input
***
> The following user data is needed to calculate the program output.

+ Student Scores -> file (flat)

#### Example
```c++
"test.txt" ->
Andrew Miller 87.50 89 65.75 37 98.50
```

## Output
***
> The following system data is output by the program.

+ Student Average -> file (flat)

### Example
```c++
"testavg.out" ->
Andrew Miller 87.50 89 65.75 37 98.50 75.55
```

## Test Data
| Input  | Score 1 | Score 2 | Score 3 | Score 4 | Score 5 |
|:------:|:-------:|:-------:|:-------:|:-------:|:-------:|
| Test 1 | 87.50   |  89.00  | 65.75   |  37.00  |  98.50  |
| Test 2 | 22.11   |  35.93  | 41.20   |  70.18  |  2.43   |
| Test 3 | 55.03   |  65.32  |  62.87  |   6.85  |  84.22  |

| Output | First Name | Last Name | Average |
|:------:|:----------:|:---------:|:-------:|
| Test 1 | Andrew     | Miller    | 75.55   |
| Test 2 | Jacob      | Hopkins   | 34.37   |
| Test 3 | Matthew    | Stevens   | 54.85   |
