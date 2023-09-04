#include <bits/stdc++.h>

int main() {
    std::cout << "Guess a number between 100 and 999 within 10 attempts!" << std::endl << "Goodluck!" << std::endl;
    srand(time(0));
    int x;

    do {
    x = rand() % 1000;
    } while (x < 100);
 
    std::string guess = std::to_string(x);

    char* guess_array = new char[guess.length() + 1];

    guess_array[guess.length()] = '\0';

    for (int i = 0; i < guess.length(); i++) {
        guess_array[i] = guess[i];
    }
    for(int i=0; i <= 10; i++){
        if(i == 10){
            std::cout << "You lost! the number was: " << guess << "Try again next time!" << std::endl;
            break;
        }
        std::cout << "Attempt No. " << i + 1 << std::endl;
        int user;
        std::cout << "Put your input: ";
        std::cin >> user;
        std::string guess_user = std::to_string(user);
    
        char* user_array = new char[guess_user.length() + 1];
        user_array[guess_user.length()] = '\0';
        for (int i = 0; i < guess_user.length(); i++) {
        user_array[i] = guess_user[i];
        }
    
        int count = 0;
        for (int i = 0; i < 3; i++) {
        if (user_array[i] == guess_array[i]) {
            count++;
        }
        }
        if(count == 3){
            std::cout << "You won!" << std::endl;
            break;
        }
        else if( count == 2){
            std::cout << "Only two digits are correct." << std::endl;
        }
        else if( count == 1){
            std::cout << "Only 1 digit is correct" << std::endl;
        }
        else{
            std::cout << "None of the digit is correct! Try again!" << std::endl;
        }

    }
    return 0;
}