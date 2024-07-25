// Brute Force
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
  int n = v.size();
  for(int i=0;i<n;i++){
    int num = v[i];
    int cnt = 0;
    for(int j=0;j<n;j++){
      if(v[j] == num){
        cnt++;
      }
    }
    if(cnt>(n/2)){
      return v[i];
    }
  }
  return -1;
}
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

// Better Approach
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
  map <int,int> mpp;
  int n = v.size();
  for (int i=0;i<n;i++){
    mpp[v[i]]++;
  }
  for (auto it: mpp){
    if (it.second > n/2){
      return it.first;
    }
  }
  return -1;
}
int main()
{6
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

// Optimal Solution (MOORE'S VOTING Algorithm)
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
  int elem , cnt=0 , cnt1=0; 
  int n = v.size();
  for (int i=0;i<n;i++){
    if (cnt == 0){
      cnt = 1;
      elem=v[i];
    }else if(v[i]==elem){
      cnt++;
    }else{
      cnt--;
    }
  }
  for(int i=0;i<n;i++){
    if(v[i]=elem){
      cnt1++;
    }
    if(cnt1>n/2){
      return elem;
    }
  }
  return -1;
}
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
