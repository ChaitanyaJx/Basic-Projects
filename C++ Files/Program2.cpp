#include <iostream>
#include <vector>

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
    std::cin >> x;
    std::vector<int> result = decimal_to_binary(x);
    for(int digit : result){
        std::cout << digit;
    }
    std::cout << std::endl;
    return 0;
}