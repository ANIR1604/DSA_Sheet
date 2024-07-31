// Brute Force
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArr(vector<int> arr, int n) {
    std::vector<int> pos;
    std::vector<int> neg;
    for (int i=0;i<n;i++){
      if(arr[i]<0){
        neg.push_back(arr[i]);
      }else{
        pos.push_back(arr[i]);
      }
    }
    std::vector<int> v;
    for(int i=0;i<n/2;i++){
      arr[2*i]=pos[i];
      arr[2*i + 1] = neg[i];
    }
    return arr;
}
int main()
{
    std::vector<int> arr{3,-2,1,-5,2,-4};
    int n = arr.size();
    std::vector<int> newArr = rearrangeArr(arr, n);
    for(int i=0;i<newArr.size();i++){
      cout<<newArr[i]<<" ";
    }
    return 0;
}

// Better Solution
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArr(vector<int> arr, int n) {
    std::vector<int> ans(n,0);
    int pos=0, neg=1;
    for(int i=0;i<n;i++){
      if(arr[i]<0){
        ans[neg]=arr[i];
        neg+=2;
      }else{
        ans[pos]=arr[i];
        pos+=2;
      }
    }
    return ans;
}
int main()
{
    std::vector<int> arr{3,-2,1,-5,2,-4};
    int n = arr.size();
    std::vector<int> newArr = rearrangeArr(arr, n);
    for(int i=0;i<newArr.size();i++){
      cout<<newArr[i]<<" ";
    }
    return 0;
}

// Optimal Approach
