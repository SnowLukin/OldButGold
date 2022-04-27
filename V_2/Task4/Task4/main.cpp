//
//  main.cpp
//  Task4
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int givenNumber) {
    int number = abs(givenNumber);
    if (number == 0 || number == 1) return false;
    
    for (int i = 2; i <= number / 2; i++)
        if (number % i == 0) return false;
    
    return true;
}

int main(int argc, const char * argv[]) {
    int value;
    ifstream readFile("readFile.txt");
    ofstream writePrimesFile("writePrimesFile.txt");
    ofstream writeNotPrimesFile("writeNotPrimesFile.txt");
    
    while (!readFile.eof()) {
        readFile >> value;
        if (isPrime(value)) {
            writePrimesFile << value << endl;
        } else {
            writeNotPrimesFile << value << endl;
        }
    }
    readFile.close();
    writePrimesFile.close();
    writeNotPrimesFile.close();
}
