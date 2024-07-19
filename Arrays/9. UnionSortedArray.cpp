// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr1[] = {1,2,3,0,0,4,0,5,0,6,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1,2,3,4,4,5,6,7,8,9,44};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    set <int> st;
    for (int i=0;i< n1;i++){
        st.insert(arr1[i]);
    }
    for (int i=0;i< n2;i++){
        st.insert(arr2[i]);
    }
    std::vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}

// Optimal Solution
#include <bits/stdc++.h>
using namespace std;
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; 
  vector < int > Union;
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j])
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
        i++;
    } 
    else 
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
        j++;
    }
  }
  while (i < n)
  {
    if (Union.back() != arr1[i])
        Union.push_back(arr1[i]);
        i++;
  }
  while (j < m)
  {
    if (Union.back() != arr2[j])
        Union.push_back(arr2[j]);
        j++;
  }
  return Union;
}

int main()
{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union:  ";
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

