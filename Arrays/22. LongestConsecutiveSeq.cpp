// Brute Force
#include <bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int>&a, int num) {
  int n=a.size();
    for(int i=0;i<n;i++){
      if(a[i]==num){
        return true;
      }
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int longest = 1;
    int n=a.size();
    for (int i=0;i<n;i++){
      int x = a[i];
      int cnt=1;
      while(linearSearch(a,x+1)){
        x+=1;
        cnt+=1;
      }
      longest = max(longest,cnt);
    }
    return longest;
}
int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is: " << ans << "\n";
    return 0;
}

// Better Solution
#include <bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int>&a) {
    if (a.size()==0) return 0;
    int n = a.size();
    int lastsmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for (int i = 0; i<n; i++){
      if(a[i]-1 == lastsmaller){
        cnt+=1;
        lastsmaller=a[i];
      }else if(a[i] != lastsmaller){
        cnt = 1;
        lastsmaller = a[i];
      }
      longest = max(longest,cnt);
    }
    return longest;
}
int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is: " << ans << "\n";
    return 0;
}

// Optimal Solution
