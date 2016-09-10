# Special Pay
***
### Info
Three employees in a company are up for a special pay increase. You are
given a file, say SalaryData.txt, with the following data:
```
Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1
```
Each input line consists of an employee’s last name, first name,
current salary, and percent pay increase. For example, in the first
input line, the last name of the employee is Miller, the first name is
Andrew, the current salary is 65789.87, and the pay increase is 5%.
Write a program that reads data from the specified file and stores the
output in the file SalaryOutput.dat. For each employee, the data  must 
be output in the following form: firstName lastName updatedSalary.
Format the output of decimal numbers to two decimal places

### Implementation
> These are the constants and functions used to calculate the program output.

```
new_salary = salary X increase;
```

## Input
***
> The following user data is needed to calculate the program output.

+ Salary Data -> file (flat)

#### Example
```c++
"SalaryData.txt" ->
Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1
```

## Output
***
> The following system data is output by the program.

+ Updated Salary Data -> file (flat)

### Example
```c++
"SalaryOutput.dat" ->
Andrew Miller 69079.36
Sheila Green 80446.11
Amit Sethi 79469.43
```

## Test Data
| Input  |      Name     |   Salary  | Pay Increase |
|:------:|:-------------:|:---------:|:------------:|
| Test 1 | Miller Andrew | $65789.87 |  5%          |
| Test 2 | Green Sheila  | $75892.56 |    6%        |
| Test 3 | Sethi Amit    | $74900.50 |      6.1%    |

| Output |      Name     | Updated Salary  |
|:------:|:-------------:|:---------------:|
| Test 1 | Andrew Miller | $69079.36       |
| Test 2 | Sheila Green  | $80446.11       |
| Test 3 | Amit Sethi    | $79469.43       |
