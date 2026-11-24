#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before calling swapByReference:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swapByReference(x, y);

    cout << "After calling swapByReference:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    cout << "\nExplanation: The function received REFERENCES to x and y." << endl;
    cout << "Changes made inside the function do not affect the originals." << endl;

    return 0;
}