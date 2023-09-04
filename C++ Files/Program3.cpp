#include <bits/stdc++.h>

int main(){
    int number;
    std::cout << "Input: ";
    std::cin >> number;
    std::string str_number = std::to_string(number); 
    int count = str_number.length();
    int sum_string = 0;
    for(char i: str_number){
        sum_string += std::stoi(std::string(1, i)) * pow(2, count);
        count -= 1;
    }
    std::cout << "Output: " << sum_string << std::endl;
    return 0;
}