//
//  main.cpp
//  Task2
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
using namespace std;

int getSumOfDigits(int number) {
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}

bool isOdd(int number) {
    return number % 2 != 0;
}

int main(int argc, const char * argv[]) {
    int counter = 0;
    
    int number;
    cin >> number;
    while (number != 0) {
        int sumOfDigits = getSumOfDigits(number);
        if (isOdd(sumOfDigits)) counter++;
        cin >> number;
    }
    cout << counter;
}
