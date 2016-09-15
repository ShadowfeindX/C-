# Merger
***
### Info
Write a program that reads two input files whose lines are ordered by a key data
field. Your program should merge these two files, writing an output file that
contains all lines from both files ordered by the same key field. As an example,
if two input files contain student names and grades for a particular class
ordered by name, merge the information as shown below.

| File 1  |   File 2  | Output File |
|:-------:|:---------:|:-----------:|
| Adams C | Barnes A  |	Adams C     |
| Jones D | Johnson C |	Barnes A    |
| King B  |           | Johnson C   |
|         |           | Jones D     |
|         |           | King B      |

Using a text editor, create File 1 and File 2. You must read one line of a file
at a time and either write it or the last line read from the other data file to
the output file. A common merge algorithm is the following:

```
Read a line from each data file
While the end of both files has not been reached
     If the line from file 1 is smaller than the line from file 2
         Write the line from file 1 to the output file 
         Read a new line from file 1
     Else
         Write the line from file 2 to the output file
         Read a new line from file 2.
Write the remaining lines (if any) from file 1 to the output file.
Write the remaining lines (if any) from file 2 to the output file.
```

You must write the merge algorithm yourself, do not use any code from the
standard template library.

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
