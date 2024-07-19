// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    int temp[d-1]={};
    for (int i=0; i<d;i++){
        temp[i] = arr[i];
    }
    for (int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for (int i=n-d; i<n;i++){
        arr[i] = temp[i-(n-d)];
    }
    cout<<arr[0]<<arr[1];
}

// Optimal Solution
