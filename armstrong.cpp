#include <iostream>
#include <cmath>
using namespace std;

int input_number() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

   
    while (n < 0) {
        cout << "Armstrong numbers are only for non-negative integers. Please enter again: ";
        cin >> n;
    }

    return n;
}

int armstrong(int n) {
    int temp = n, digit = 0, sum = 0;

  
    int numCopy = n;  
    while (numCopy > 0) {
        numCopy /= 10;
        digit++;
    }

   
    temp = n; 
    while (temp > 0) {
        int num = temp % 10;
        sum += static_cast<int>(pow(num, digit)); 
        temp /= 10;
    }

    return sum;
}

bool isArmstrong(int sum, int original) {
    return sum == original;
}

int main() {
    int n = input_number();
    int sum = armstrong(n);

    if (isArmstrong(sum, n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}