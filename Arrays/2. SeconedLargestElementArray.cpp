// Brute Force 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int slargest = arr [0];
    int largest = arr[n-1];
    for (int i = n-2 ; i >= 0; i--){
        if (arr[i] != largest ){
            slargest = arr [i];
            break;
        }
    }
    cout<<"The seconed largest number in the array is: "<<slargest;
}

