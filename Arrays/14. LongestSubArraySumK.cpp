// Brute Force
#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a, long long k) {
  int len = 0;
  int n = a.size();
  for(int i=0;i<n;i++){
    for (int j=i;j<n;j++){
      int sum = 0;
      for(int m = i;m<=j;m++){
        sum=sum+a[m];
      }
      if (sum == k){
        len = max(len,(j-i+1));
      }
    }
  }
  return len;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

// Brute Force
#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a, long long k) {
  int len = 0;
  int n = a.size();
  for(int i=0;i<n;i++){
    int sum = 0;
    for (int j=i;j<n;j++){
      sum+=a[j];
      if (sum == k){
        len = max(len,(j-i+1));
      }
    }
  }
  return len;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

// Better Solution (Hashing)
