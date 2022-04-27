//
//  main.cpp
//  Task2
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
using namespace std;

bool hasDigit(int number, int digit) {
    while (number != 0) {
        if (number % 10 == digit) return true;
        number = number / 10;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int sum = 0;
    
    int number;
    cin >> number;
    while (number != 0) {
        if (hasDigit(number, 5)) sum += number;
        cin >> number;
    }
    cout << sum;
}
