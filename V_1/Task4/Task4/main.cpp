//
//  main.cpp
//  Task4
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
#include <fstream>
using namespace std;

bool isEven(int number) {
    return number % 2 != 0;
}

int getDigitSumOfNumber(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    int value;
    ifstream evenReadFile("readFile.txt");
    ofstream writeFile("writeFile.txt");
    
    while (!evenReadFile.eof()) {
        evenReadFile >> value;
        int digitSumOfNumber = getDigitSumOfNumber(value);
        if (isEven(digitSumOfNumber)) writeFile << value << endl;
    }
    evenReadFile.close();
    
    ifstream oddReadFile("readFile.txt");
    while (!oddReadFile.eof()) {
        oddReadFile >> value;
        int digitSumOfNumber = getDigitSumOfNumber(value);
        if (!isEven(digitSumOfNumber)) writeFile << value << endl;
    }
    oddReadFile.close();
    writeFile.close();
}
