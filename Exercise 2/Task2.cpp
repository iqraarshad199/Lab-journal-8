#include <iostream>
using namespace std;

// Recursive function to compute the sum of array elements
/**
 * Computes the sum of elements in an array recursively.
 * @a: The integer array containing the elements to be summed.
 * @size: The number of elements in the array to consider for sum.
 * @return the sum of the elements in the array.
 */
int sum(int a[], int size) {
    if (size == 0) {
        return 0;
    }
    return a[size - 1] + sum(a, size - 1);
}

int main() {
    cout << "\n\t\t\t====================================================" << endl;
    
    int arr[] = { 1, 2, 3, 4 };
    int result = sum(arr, 4); 
    cout <<"\n\t\t\tResult = "<<result << endl;

    cout << "\n\t\t\t====================================================" << endl;
    return 0;
}