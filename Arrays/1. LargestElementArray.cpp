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

// Optimal Code
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = { 3, 7, 1, 9, 5, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i<n ; i++){
        if (arr[i] > largest){
            largest = arr [i];
        }
    }
    cout << "The largest number in the array is: " << largest;
}
