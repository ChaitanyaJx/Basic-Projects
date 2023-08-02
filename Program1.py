from random import randint
guess = str(randint(100, 999))
guess_list = list(guess)
for count in range(0, 11):

    if count == 10:
        print("You lost! the number was:", guess)
        break
    
    print("Guess No.", count + 1)

    user_guess = list(input("Input: "))

    correct_digit = 0

    for i in range(3):
        if guess_list[i] == user_guess[i]:
            correct_digit += 1
        else:
            correct_digit = correct_digit


    if not len(user_guess) == 3:
        count -= 1
        print("Invalid Input! Please try again!")
    elif correct_digit == 3:
        Finish = True
        print("You won")
    elif correct_digit == 2:
        print("Only two digits are correct.")
    elif correct_digit == 1:
        print("Only 1 digit is correct")
    else:
        print("None of the digit is correct! Try again!")





