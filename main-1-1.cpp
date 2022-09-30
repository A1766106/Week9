#include <iostream>

using namespace std;

/**
 * A very simple function that adds two input argument numbers together.
 * Returns the sum of the two arguments.
 */
int add(int lhs, int rhs) {
    return lhs + rhs;
}

int main()
{

    if (add(1, 2) != 3) {
        cout << "Test 1 failed!" << endl;
    }
    if (add(1, -1) != 0) {
        cout << "Test 2 failed!" << endl;
    }
    if (add(-1, 5) != 4) {
        cout << "Test 3 failed!" << endl;
    }
    if (add(-1, -5) != -6) {
        cout << "Test 4 failed!" << endl;
    }

    return 0;
}