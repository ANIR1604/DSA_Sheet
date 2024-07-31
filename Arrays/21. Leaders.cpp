// Brute Force
#include <bits/stdc++.h>
using namespace std;
vector <int> printLeadersBruteForce(int arr[], int n){
  std::vector<int> ans;
  for(int i=0; i<n;i++){
    bool leader = true;
    for(int j=i+1;j<n;j++){
      if(arr[j]>arr[i]){
        leader=false;
        break;
      }
    }
    if(leader==true){
      ans.push_back(arr[i]);
    }
  }
  return ans;
}
int main() {
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};
  vector<int> ans = printLeadersBruteForce(arr,n); 
  for(int i = 0;i<ans.size();i++){   
      cout<<ans[i]<<" ";
  }
  cout<<endl;
  return 0;
}

// Optimal Solution
#include <bits/stdc++.h>
using namespace std;
vector <int> printLeaders(int arr[], int n){
  std::vector<int> ans;
  int maxi = INT_MIN;
  for(int i=n-1;i>=0;i--){
    if(arr[i]>maxi){
      ans.push_back(arr[i]);
    }
    maxi=max(maxi,arr[i]);
  }
  sort(ans.begin(),ans.end());
  return ans;
}
int main() {
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};
  vector<int> ans = printLeaders(arr,n); 
  for(int i = 0;i<ans.size();i++){   
      cout<<ans[i]<<" ";
  }
  cout<<endl;
  return 0;
}
