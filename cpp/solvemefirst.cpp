#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Function to return sum of a and b
int solveMeFirst(int a, int b) {
    return a+b;
}

int main() {
    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    int sum = solveMeFirst(num1, num2);
    cout << "Sum: " << sum << endl;

    return 0;
}
