//
//  main.cpp
//  Task1
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
using namespace std;

const int matrixSize = 3;

bool isPrime(int givenNumber) {
    int number = abs(givenNumber);
    if (number == 0 || number == 1) return false;
    
    for (int i = 2; i <= number / 2; i++)
        if (number % i == 0) return false;
    
    return true;
}

void print(int matrix[][matrixSize]) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}

int main() {
    // Given matrix
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int i = 1; i < matrixSize; i++)
        for (int j = 0; j < i; j++)
            if (isPrime(matrix[i][j])) matrix[i][j] *= 2;
    print(matrix);
}
