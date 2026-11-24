// ============================================================
// ACTIVITY 2: POINTERS VS REFERENCES
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int originalValue = 100;

    int& refValue = originalValue;

    int* ptrValue = &originalValue;

    cout << "--- Initial State ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue:      " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    refValue = 200;

    cout << "\n--- After setting refValue = 200 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    *ptrValue = 300;

    cout << "\n--- After setting *ptrValue = 300 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue:      " << refValue << endl;

    int anotherValue = 500;
    ptrValue = &anotherValue;

    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    return 0;
}