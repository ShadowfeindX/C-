# Movie Tickets
***
### Info
A movie in a local theater is in great demand. To help a local charity,
the theater owner has decided to donate to the charity a portion of the
gross amount generated from the movie. This example designs and
implements a program that prompts the user to input the movie name,
adult ticket price, child ticket price, number of adult tickets sold,
number of child tickets sold, and percentage of the gross amount donated
to charity. The program should output the movie name, total number of
tickets sold, gross amount, percentage of amount donated, total amount
donated, and net sale profits.

### Implementation
> These are the constants and functions used to calculate the program output.

```
Tickets Sold -> Adult Tickets Sold + Child Tickets Sold

Adult Sales -> Adult Tickets Sold X Adult Ticket Price

Child Sales -> Child Tickets Sold X Child Ticket Price

Gross Sales -> Adult Sales + Child Sales

Amount Donated -> Gross Sales X Percentage to Donate

Net Sales -> Gross Sales - Amount Donated
```

## Input
***
> The following user data is needed to calculate the program output.

+ Movie Name -> string
+ Adult Ticket Price -> float
+ Child Ticket Price -> float
+ Adult Tickets Sold -> short
+ Child Tickets Sold -> short
+ Percentage to Donate -> float

#### Example
```c++
"What movie are you screening?" Journey to Mars
"What is the price of an adult ticket?" $6.45
"What is the price of a child ticket?" $3.45
"How many adult tickets did you sell?" 1920
"How many child tickets did you sell?" 640
"What percentage would you like to donate?" 10.00%
```

## Output
***
> The following system data is output by the program.

+ Movie Name -> string
+ Tickets Sold -> short (unsigned)
+ Gross Sales -> float
+ Percentage Donated -> float
+ Amount Donated -> float
+ Net Sales -> float

### Example
```c++
Movie Name ....................... Journey to Mars
Number of Tickets Sold ...........       2650
Gross Amount ..................... $ 14592.00
Percentage of Amount Donated .....      10.00%
Amount Donated ................... $  1459.20
Net Sales ........................ $ 13132.80
```

## Test Data
| Input  |     Movie       | Adult Price | Adult Tickets | Child Price | Child Tickets | Percent Donated |
|:------:|:---------------:|:-----------:|:-------------:|:-----------:|:-------------:|:---------------:|
| Test 1 | Journey to Mars |   $6.45     |  1920         |  $3.45      |   640         |   10.00%        |
| Test 2 | Time Shift      |   $11.30    |  1446         |  $12.79     |   1136        |   14.84%        |
| Test 3 | Night of the Day of the Dawn of the Son of the Bride of the Return of the Revenge of the Terror of the Attack of the Evil, Mutant, Alien, Flesh Eating, Hellbound, Zombified Living Dead Part 2 in Shocking 2-D |   $2.67     |   232         |   $9.27     |   1168        |    2.49%        |

| Output |     Movie       | Tickets Sold | Gross Sales | Percent Donated | Donation | Net Sales |
|:------:|:---------------:|:------------:|:-----------:|:---------------:|:--------:|:---------:|
| Test 1 | Journey to Mars |  2650        | $14592.00   |  10.00%         | $1459.20 | $13132.80 |
| Test 2 | Time Shift      |  2582        | $30869.24   |  14.84%         | $4580.99 | $26288.24 |
| Test 3 | Night of the Day of the Dawn of the Son of the Bride of the Return of the Revenge of the Terror of the Attack of the Evil, Mutant, Alien, Flesh Eating, Hellbound, Zombified Living Dead Part 2 in Shocking 2-D |  1400        | $11446.80   |   2.49%         | $285.02  | $11161.77 |
