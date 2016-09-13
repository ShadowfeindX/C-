# Interesting...
***
### Info
Interest on a credit card’s unpaid balance is calculated using the average daily
balance. Suppose that netBalance is the balance shown in the bill, payment is
the payment made, d1 is the number of days in the billing cycle, and d2 is the
number of days payment is made before billing cycle. Then, the average daily
balance is:
`averageDailyBalance = (netBalance * d1 - payment * d2) / d1.`
The interest on the unpaid balance is:
`interest = averageDailyBalance * interestRate`
where interestRate is the interest rate per month. Write a program that accepts
as input netBalance, payment, d1, d2, and interestRate. The program outputs the
interest. Format your output to two decimal places.

### Implementation
> These are the constants and functions used to calculate the program output.

```
>> functions have been provided
```

## Input
***
> The following user data is needed to calculate the program output.

+ Net Balance -> float
+ Payment -> float
+ Length of Billing Cycle -> short
+ Days After Payment -> short
+ Interest Rate -> float

#### Example
```c++
"Last Payment:" $25.00
"Length of Billing Cycle:" 30 Days
"Remaining Days in Billing Cycle:" 15 Days
"Last Statement Balance:" $259.00
"Current Interest Rate:" 2.5%
```

## Output
***
> The following system data is output by the program.

+ Interest -> float

### Example
```c++
"Your interest this period was" $6.16.
```

## Test Data
|        | Balance | Payment | Billing Cycle |
|:------:|:-------:|:-------:|:-------------:|
| Test 1 | $259.00 | $25.00  | 30 Days       |
| Test 2 | $523.00 | $77.43  | 90 Days       |
| Test 3 | $163.34 | $59.23  | 30 Days       |

|        | Payment Day | Interest % | Interest $ |
|:------:|:-----------:|:----------:|:----------:|
| Test 1 | 15th        |   2.50%    |  $6.16250  |
| Test 2 | 60th        |  23.11%    |  $108.936  |
| Test 3 | 12th        |   3.10%    |  $4.32909  |
