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

// Better Solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = { 3, 7, 1, 9, 5, 15, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int slargest = -1 ;
    for (int i = 0; i<n ; i++){
        if (arr[i] > largest){
            largest = arr [i];
        }
    }
    cout << "The largest number in the array is: " << largest << "\n";
    for (int i = 0; i<n ; i++){
        if ((arr[i] != largest) && (arr[i]>slargest)){
            slargest = arr [i];
        }
    }
    cout << "The seconed largest number in the array is: " << slargest;
}

// Optimal Solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = { 3, 7, 1, 9, 5, 15, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int slargest = -1 ;
    for (int i=1; i<n; i++){
        if (arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    cout<<"The seconed largest number in the array is: "<<slargest;
}
