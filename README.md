## Program 1: Number Guesser.
This is **C++** Number Guesser game. Also contains **Python** equivalent.
### Example Output
```
Guess a number between 100 and 999 within 10 attempts!
Goodluck!
Attempt No. 1
Put your input: 142
Only 1 digit is correct
Attempt No. 2
Put your input: 143
Only 1 digit is correct
Attempt No. 3
Put your input: 154
None of the digit is correct! Try again!
Attempt No. 4
Put your input: 245
Only 1 digit is correct
Attempt No. 5
Put your input: 346
Only two digits are correct.
Attempt No. 6
Put your input: 446
Only two digits are correct.
Attempt No. 7
Put your input: 556
Only 1 digit is correct
Attempt No. 8
Put your input: 646
Only two digits are correct.
Attempt No. 9
Put your input: 746
You won!
```
## Program 2: Decimal to Binary
Program that converts decimal number to binary while using recursive function
### Example Output
```
Input: 5
Ouput: 101

Input: 9
Output: 1001
```
Python Code for better understanding:
```
def decimal_to_binary(x):
    def conversion(x):
        if x == 1:
            return [x]
        else:
            return conversion(x // 2) + [x % 2]
    
    return conversion(x)
```

## Program 3: Binary to Decimal
Exact Reverse of Project 2 that is to convert binary code to decimal.

### Example
```
Input: 1000 1100
Output: 140
```
Python code:
```
string = input("Input:")
cout = len(string) - 1
sum_string = 0
for i in string:
    sum_string = sum_string + int(i) * (2** cout)
    cout = cout - 1

print("Output: ", sum_string)
```
