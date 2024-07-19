// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3,0,0,4,0,5,0,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        arr[i]=temp[i];
    }
    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
}

// Optimal Solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3,0,0,4,0,5,0,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j= -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=(j+1);i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
