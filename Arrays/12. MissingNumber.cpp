// Brute Force
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

// Better Solution (Hashing)
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {
  int n= a.size();
  int hash[n+1]={0};
  for (int i=0;i<n;i++){
    hash[a[i]] = 1;
  }
  for (int i=1;i<=n;i++){
    if(hash[i]==0){
      return i;
    }
  }
  return -1;
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

// Optimal Solution (Arithmetic)
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {
  int sum = (N*(N+1))/2;
  int sum1=0;
  for (int i=0;i<a.size();i++){
    sum1 += a[i];
  }
  return (sum-sum1);
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

// Optimal Solution (XOR)
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {
  int xor1=0;
  int xor2=0;
  int n=N-1;
  for(int i=0;i<n;i++){
    xor1 = xor1 ^ (i+1);
    xor2 = xor2 ^ a[i];
  }
  xor1 = xor1 ^ N;
  return xor1^xor2;
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

