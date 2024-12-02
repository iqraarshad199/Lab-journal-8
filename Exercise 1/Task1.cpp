#include <iostream>
using namespace std;

// Function to implement Ackermann's function
/**
 * Computes the Ackermann function for non-negative integers m and n.
 * A(0, n) = n + 1
 * A(m, 0) = A(m - 1, 1) for m > 0
 * A(m, n) = A(m - 1, A(m, n - 1)) for m > 0 and n > 0
 * @m Non-negative integer representing the first parameter of the Ackermann function.
 * @n Non-negative integer representing the second parameter of the Ackermann function.
 * @return the result of the Ackermann function A(m, n).
 */
int Ackermann(int m, int n) {
    if (m == 0) {
        return n + 1; 
    }
    else if (m == 1) {
        return n + 2; 
    }
    else if (m == 2) {
        return (2 * n) + 3; 
    }
    else {
        return Ackermann(m - 1, Ackermann(m, n - 1)); 
    }
}

int main() {
    cout << "\n\t\t\t====================================================" << endl;
    int m = 2;
    int n = 2;

    int result = Ackermann(m, n);
    cout << "\n\t\t\tAckermann(" << m << ", " << n << ") = " << result << endl;

    cout << "\n\t\t\t====================================================" << endl;
    return 0;
}