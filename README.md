# Round 'Em Up
***
### Info
Write a program that prompts the user to
input five decimal numbers. The program
should then add the five decimal numbers,
convert the sum to the nearest integer,
and print the result.

### Implementation
> These are the constants and functions used to calculate the program output.

```c++
total_value = total_value + decimal
>> loop 5 times
```

## Input
***
> The following user data is needed to calculate the program output.

+ Five Decimal Values -> Float

#### Example
```c++
"Please enter 5 decimals:" 1.912 0.234 224 13.46 .11111
```

## Output
***
> The following system data is output by the program.

+ Rounded Total Value -> Integer

### Example
```c++
"Your total (rounded to the nearest integer) is:" 240
```

## Test Data
|        | Decimal 1 | Decimal 2 | Decimal 3 | Decimal 4 | Decimal 5 | Total Value |
|:------:|:---------:|:---------:|:---------:|:---------:|:---------:|:-----------:|
| Test 1 |  1.912    |  0.234    |   224     |   13.46   |  .11111   |  240        |
| Test 2 | 33.4123   |  0.12345  |  12       |  55.0001  | 0.334455  |  101        |
| Test 3 | -122      |  0.3242   |  0.937023 |  -721.323 | 441.249   | -401        |
