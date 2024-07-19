// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr1[] = {1,2,3,0,0,4,0,5,0,6,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1,2,3,4,4,5,6,7,8,9,44};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    set <int> st;
    for (int i=0;i< n1;i++){
        st.insert(arr1[i]);
    }
    for (int i=0;i< n2;i++){
        st.insert(arr2[i]);
    }
    std::vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}

// Optimal Solution
