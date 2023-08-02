#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Guess a number between 100 and 999 within 10 attempts!" << endl << "Goodluck!" << endl;
    srand(time(0));
    int x;

    do {
    x = rand() % 1000;
    } while (x < 100);
 
    string guess = to_string(x);

    char* guess_array = new char[guess.length() + 1];

    guess_array[guess.length()] = '\0';

    for (int i = 0; i < guess.length(); i++) {
        guess_array[i] = guess[i];
    }
    for(int i=0; i <= 10; i++){
        if(i == 10){
            cout << "You lost! the number was: " << guess << "Try again next time!" << endl;
            break;
        }
        cout << "Attempt No. " << i + 1 << endl;
        int user;
        cout << "Put your input: ";
        cin >> user;
        string guess_user = to_string(user);
    
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
            cout << "You won!" << endl;
            break;
        }
        else if( count == 2){
            cout << "Only two digits are correct." << endl;
        }
        else if( count == 1){
            cout << "Only 1 digit is correct" << endl;
        }
        else{
            cout << "None of the digit is correct! Try again!" << endl;
        }

    }
    return 0;
}