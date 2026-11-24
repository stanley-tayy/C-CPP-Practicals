#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

int factorialTail(int n, int accumulator = 1) {
    if (n <= 1) {
        return accumulator;
    }

    return factorialTail(n - 1, n * accumulator);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Simple recursion: " << factorialRecursive(number) << endl;
    cout << "Tail recursion: " << factorialTail(number) << endl;

    return 0;
}