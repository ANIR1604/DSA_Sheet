// Optimal Solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = { 3, 7, 1, 9, 5, 15, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n; i++){
        if (arr[i]>arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}
