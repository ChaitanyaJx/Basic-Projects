#include <bits/stdc++.h>

int main(){
    int n;
    std::cout << "Upto how many fibonacci numbers you want: ";
    std::cin >> n;
    n--;
    int* array = new int[n];
    array[0] = 1;
    array[1] = 1;
    for(int i = 2; i <= n; i ++){
        array[i] = array[i-1] + array[i-2];
    }
    std::cout << "Fibonacci numbers are: " << std::endl;
    for(int i = 0; i <= n; i++){
        std::cout << array[i] << " ";
    }

    delete[] array;
    std::cout << std::endl;
    return 0;
}
