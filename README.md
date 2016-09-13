# Box Seats
***
### Info
The manager of a football stadium wants you to write a program that calculates
the total ticket sales after each game. There are four types of tickets — box,
sideline, premium, and general admission. After each game, data is stored in a
flat file in the following form:
`ticketPrice  numberOfTicketsSold`
Sample data are shown below:
```
250 5750
100 28000
50 35750
25 18750
```
The first line indicates that the ticket price is $250 and that 5750 tickets
were sold at that price. Output the number of tickets sold and the total sale
amount. Format your output with two decimal places.

### Implementation
> These are the constants and functions used to calculate the program output.

```
profits = ticketPrice X ticketsSold
total_sales = tickets1 + tickets2 ... ticketsX
total_profits = profits1 + profits2 ... profitsX
```

## Input
***
> The following user data is needed to calculate the program output.

+ File Name -> string
+ Stadium Data -> file (flat)

#### Example
```c++
"File:" StadiumData.txt
"StadiumData.txt" ->
250 5750
100 28000
50 35750
25 18750
```

## Output
***
> The following system data is output by the program.

+ Tickets Sold -> int
+ Sales -> float

### Example
```c++
"Tickets Sold:" 88250 tickets
"Total Sales:" $6,493,750.00
```
