#include <bits/stdc++.h>
std::vector<int> conversion(int x){
    if(x == 1){
        return {x};
    }else{
        int div = x / 2;
        auto array = conversion(div);
        array.push_back(x % 2);
        return array;
    }
}

std::vector<int> decimal_to_binary(int x){
    return conversion(x);
}

int main(){
    int x;
    std::cout << "Input: ";
    std::cin >> x;
    std::vector<int> number = decimal_to_binary(x);
    std::cout << "Output: ";
    for(int i : number){
        std::cout << i;
    }
    std::cout << std::endl;
    return 0;
}
