//#include <iostream>
//using namespace std;
//
//// Recursive function to compute the sum of array elements
//int sum(int a[], int size) {
//    // Base case: if size is 0, return 0
//    if (size == 0) {
//        return 0;
//    }
//    // Recursive case: return the last element + sum of the rest
//    return a[size - 1] + sum(a, size - 1);
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4 };
//    int result = sum(arr, 4); // Call the sum function with the array and its size
//    cout << result << endl; // Should print 10
//    return 0;
//}