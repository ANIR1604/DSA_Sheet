// Brute Force
#include <bits/stdc++.h>
using namespace std;
int apperance(vector<int>&a) {
  for (int i=0;i<a.size();i++){
    int num=a[i];
    int cnt = 0;
    for (int j=0;j<a.size();j++){
      if (a[j] == num){
        cnt++;
      }
    }
    if (cnt == 1){
        return num;
    }
  }
  return -1;
}
int main()
{
    vector<int> a = {1,1,2,3,3,4,4,5,5};
    int ans = apperance(a);
    cout << "The number is: " << ans << endl;
    return 0;
}

// Better Solution (Hashing)
#include <bits/stdc++.h>
using namespace std;
int apperance(vector<int>&a) {
  int maxi = 0;
  int n = a.size();
  for (int i=0;i<n;i++){
    maxi = max(maxi,a[i]);
  }
  int hash[maxi+1] = {0};
  for (int i=0;i<n;i++){
    hash[a[i]]++;
  }
  for (int i=0;i<n;i++){
    if(hash[a[i]]==1){
      return a[i];
    }
  }
  return -1;
}
int main()
{
    vector<int> a = {1,1,2,3,3,4,4,5,5};
    int ans = apperance(a);
    cout << "The number is: " << ans << endl;
    return 0;
}

// Better Solution (Map)
#include <bits/stdc++.h>
using namespace std;
int apperance(vector<int>&arr) {
  int n = arr.size();
  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
      mpp[arr[i]]++;
  }
  for (auto it : mpp) {
      if (it.second == 1)
          return it.first;
  }
  return -1;
}
int main()
{
    vector<int> a = {1,1,2,3,3,4,4,5,5};
    int ans = apperance(a);
    cout << "The number is: " << ans << endl;
    return 0;
}

// Optimal Solution (XOR)
#include <bits/stdc++.h>
using namespace std;
int apperance(vector<int>&arr) {
  int n = arr.size();
  int xor1=0;
  for (int i=0;i<n;i++){
    xor1=xor1^arr[i];
  }
  return xor1;
}
int main()
{
    vector<int> a = {1,1,2,3,3,4,4,5,5};
    int ans = apperance(a);
    cout << "The number is: " << ans << endl;
    return 0;
}
