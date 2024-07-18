// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int> st;
    for (int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int index=0;
    for (auto it:st){
        arr[index] = it;
        index ++;
    }
}

// Optimal Solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(int j=1; j<n; j++){
        if (arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}
