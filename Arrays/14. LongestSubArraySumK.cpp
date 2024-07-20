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
#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a, long long k) {
  std::map<long, long> prefixsum;
  long long sum = 0;
  int maxlen = 0;
  int n = a.size();
  for(int i = 0;i<n;i++){
    sum = sum+a[i];
    if(sum==k){
      maxlen = max(maxlen,i+1);
    }
    int rem = sum - k;
    if(prefixsum.find(rem) != prefixsum.end()){
      int len = i-prefixsum[rem];
      maxlen = max(maxlen,len);
    }
    if(prefixsum.find(sum) == prefixsum.end()){
      prefixsum[sum] = i;
    }
  }
  return maxlen;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

// Optimal Solution (Two Pointer)
#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a, long long k) {
  int left=0;
  int right=0;
  long long sum = a[0];
  int maxlen = 0;
  int n = a.size();
  while (right<n){
    while(left<=right && sum>k){
      sum-=a[left];
      left++;
    }
    if(sum==k){
      maxlen = max(maxlen,right-left+1);
    }
    right ++;
    if(right<n){
      sum+=a[right];
    }
  }
  return maxlen;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
