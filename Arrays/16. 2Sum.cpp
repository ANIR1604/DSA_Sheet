// Brute Force
#include <bits/stdc++.h>
using namespace std;
string twoSum(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

// Better Solution
#include <bits/stdc++.h>
using namespace std;
string twoSum(int n, vector<int> &arr, int target) {
    map <int,int> mpp;
    for (int i=0; i<n;i++){
      int num = arr[i];
      int moreneeded = target-num;
      if(mpp.find(moreneeded) != mpp.end()){
        return "YES";
      }
      mpp[num] = i;
    }
    return "NO";
}
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant : " << ans << endl;
    return 0;
}

// Optimal Solution (Two Pointer Approach)
