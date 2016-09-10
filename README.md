# Kilograms to Pounds
***
### Info
Write a program that prompts the user to enter the weight of a person in
kilograms and outputs the equivalent weight in pounds. Output both the
weights rounded to two decimal places.(Note  that 1  kilogram =  2.2 pounds.)
Format your output with two decimal places.

### Implementation
> These are the constants and functions used to calculate the program output.

```
RATIO = 2.20462262;

weight_lbs = weight_kg X RATIO;
```

## Input
***
> The following user data is needed to calculate the program output.

+ Mass (in kilograms) -> float

#### Example
```c++
"What is your mass in kilograms?" 134.50 kg
```

## Output
***
> The following system data is output by the program.

+ Weight (in pounds) -> float

### Example
```c++
"You weigh approximately" 296.52 lbs
```

## Test Data
|        |  Mass  | Weight  |
|:------:|:------:|:-------:|
| Test 1 | 134.50 | 296.52  |
| Test 2 | 226.48 | 499.30  |
| Test 3 | 544.99 | 1201.49 |
