# Interesting...
***
### Info
Interest on a credit card’s unpaid balance is calculated using the
average daily balance. Suppose that netBalance is the balance shown in
the bill, payment is the payment made, d1 is the number of days in the
billing cycle, and d2 is the number of days payment is made before
billing cycle. Then, the average daily balance is:
`averageDailyBalance = (netBalance * d1 - payment * d2) / d1.`
The interest on the unpaid balance is:
`interest = averageDailyBalance * interestRate`
where interestRate is the interest rate per month.
Write a program that accepts as input netBalance, payment, d1, d2, and
interestRate. The program outputs the interest.
Format your output to two decimal places.

### Implementation
> These are the constants and functions used to calculate the program output.

```

```

## Input
***
> The following user data is needed to calculate the program output.

+ 

#### Example
```c++

```

## Output
***
> The following system data is output by the program.

+ 

### Example
```c++

```

## Test Data
| Input  | XXX | XXX | XXX |
|:------:|:---:|:---:|:---:|
| Test 1 |     |     |     |
| Test 2 |     |     |     |
| Test 3 |     |     |     |

| Output | XXX | XXX | XXX |
|:------:|:---:|:---:|:---:|
| Test 1 |     |     |     |
| Test 2 |     |     |     |
| Test 3 |     |     |     |
