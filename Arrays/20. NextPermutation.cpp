// Brute Force
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,3,2};
    next_permutation(arr,arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}

// Optimal Approach
#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &A) {
  int index = -1;
  int n = A.size();
  for(int i=n-2;i>=0;i--){
    if(A[i]<A[i+1]){
      index = i;
      break;
    }
  }
  if(index==-1){
    reverse(A.begin(),A.end());
    return A;
  }
  for(int i=n-1; i>index;i--){
    if(A[i]>A[index]){
      swap(A[i],A[index]);
      break;
    }
  }
  reverse(A.begin()+index+1,A.end());
  return A;
}
int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);
    cout << "The next permutation is: [ ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}
