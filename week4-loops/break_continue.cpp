#include <iostream>
using namespace std;

int main() {
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    for (int i = 1; i <= 20; i++) {
        if (i == 10) {
            cout << "Breaking at " << i << "!" << endl;
        }

        if (i % 3 == 0) {
        }

        cout << i << " ";
    }

    cout << endl;

    return 0;
}