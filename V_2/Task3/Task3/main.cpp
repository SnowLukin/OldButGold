//
//  main.cpp
//  Task3
//
//  Created by Snow Lukin on 28.04.2022.
//

#include <iostream>

struct Tree {
    int info;
    Tree *Left;
    Tree *Right;
};

bool isMultOf(int number, int devider) {
    return number % devider == 0;
}

int getSumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}

int tiredOfNamingFunctions(Tree *tree) {
    if (tree != NULL) {
        if (tree->Left != NULL && tree->Right != NULL && isMultOf(getSumOfDigits(tree->info), 7)) {
            return 1 + tiredOfNamingFunctions(tree->Left) + tiredOfNamingFunctions(tree->Right);
        } else return tiredOfNamingFunctions(tree->Left) + tiredOfNamingFunctions(tree->Right);
    } else {
        return 0;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
