//
//  main.cpp
//  Task1
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
using namespace std;

const int matrixSize = 3;

bool isPerfect(int number) {
    int sum = 0;
    
    for (int i = 1; i < number; i++)
        if (number % i == 0) sum = sum + i;
    return number == sum;
}

int arithmeticMeanAboveDiagonalElements(int matrix[][matrixSize]) {
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < matrixSize - 1; i++)
       for (int j = i + 1; j < matrixSize; j++)
           if (isPerfect(matrix[i][j])) {
               sum += matrix[i][j];
               counter++;
           }
    if (counter == 0) {
        return 0;
    }
    return sum / counter;
}

int main() {
    // Given matrix
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << arithmeticMeanAboveDiagonalElements(matrix) << endl;
}
