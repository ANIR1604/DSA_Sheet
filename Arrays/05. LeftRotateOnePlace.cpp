// Optimal Code
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = arr [0];
    for (int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp ;
    return arr;
}
