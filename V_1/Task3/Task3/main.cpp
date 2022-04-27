//
//  main.cpp
//  Task3
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>
using namespace std;

struct Tree {
    int info;
    Tree *Left;
    Tree *Right;
};

bool isPrime(int givenNumber) {
    int number = abs(givenNumber);
    if (number == 0 || number == 1) return false;
    
    for (int i = 2; i <= number / 2; i++)
        if (number % i == 0) return false;
    
    return true;
}

int sumOfPrimeLeaves(Tree *tree) {
    if (tree != NULL) {
        if (tree->Left == NULL && tree->Right == NULL && isPrime(tree->info)) {
            return tree->info + sumOfPrimeLeaves(tree->Left) + sumOfPrimeLeaves(tree->Right);
        } else return sumOfPrimeLeaves(tree->Left) + sumOfPrimeLeaves(tree->Right);
    } else {
        return 0;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
