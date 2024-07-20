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
