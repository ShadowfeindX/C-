# Milk Man
***
### Info
A milk carton can hold 3.78 liters of milk. Each morning, a dairy
farm ships cartons of milk to a local grocery store. Each carton can
hold 3.78 liters of milk. Write a program that allows the user to
enter the cost of producing one liter of milk, the profit on each
carton of milk, and the total amount of milk produced that day.
The program then calculates and displays the number of milk cartons
needed to hold the milk, the cost of producing the milk and the
profit for that day.

### Implementation
> These are the constants and functions used to calculate the program output.
```c++
LITERS_PER_CARTON = 3.78

total_cartons -> liter_produced / LITERS_PER_CARTON
>> total cartons is rounded to the nearest whole number

production_costs -> cost_per_liter X liters_produced

profits -> (total_cartons X profits_per_carton)

total_profits -> profits - production_costs
```

## Input
***
> The following user data is needed to calculate the program output.
+ Liters per Carton -> Constant
+ Cost per Liter -> Float ($)
+ Profits per Carton -> Float ($)
+ Liters Produced -> Float (Liters)
#### Example
```c++
"What is your production cost per liter?" $0.59
"What are your profits on a carton of milk?" $3.29
"What was your total milk production?" 131 L
```

## Output
***
> The following system data is output by the program.
+ Cartons Needed -> Integer (Cartons)
+ Production Costs -> Float ($)
+ Total Profits -> Float ($)
### Example
```c++
"You would need a total of:" 35 Cartons
"Your production cost for the day would be:" $77.29
"Your total profits for the day would be:" $37.86
```

## Test Data
|        | Cost Per Liter | Profits Per Carton | Liters Produced | Cartons Needed | Production Cost | Daily Profits |
|:------:|:--------------:|:------------------:|:---------------:|:--------------:|:---------------:|:-------------:|
| Test 1 | $0.39          | $1.33              | 5               | 2              | $1.95           | $0.71         |
| Test 2 | $0.43          | $1.76              | 15              | 4              | $6.45           | $19.95        |
| Test 3 | $1.33          | $2.50              | 130             | 35             | $172.90         | -$85.40       |
