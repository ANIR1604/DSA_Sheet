// Brute Force
#include <bits/stdc++.h>
int main() {
    int arr[] = { 3, 7, 1, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n);
    int largest = arr[n - 1];
    std::cout << "The largest element in the array is: " << largest << std::endl;
    return 0;
}
