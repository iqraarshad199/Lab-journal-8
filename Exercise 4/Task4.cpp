#include <iostream>
using namespace std;

/**
 * Computes the binomial coefficient C(n, m).
 * @n: The total number of items.
 * @m: The number of items to choose.
 * @return: The value of the binomial coefficient C(n, m).
 */
int binomialCoefficient(int n, int m) {
    if (m == 0 || m == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, m - 1) + binomialCoefficient(n - 1, m);
}

int main() {
    cout << "\n\t\t\t====================================================" << endl;
    int n, m;

    cout << "\n\t\t\tEnter n: ";
    cin >> n;
    cout << "\t\t\tEnter m: ";
    cin >> m;

    if (m > n || n < 0 || m < 0) {
        cout << "\n\t\t\tInvalid input. Ensure that 0 <= m <= n." << endl;
    }
    else {
        cout << "\n\t\t\tBinomial Coefficient (" << n << " choose " << m << ") = " << binomialCoefficient(n, m) << endl;
    }
    cout << "\n\t\t\t====================================================" << endl;
    return 0;
}