// Brute Force
#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0 ; i < n; i++) { 
        for (int j = i; j < n; j++) { 
            int sum = 0;
            for (int K = i; K <= j; K++)
                sum += arr[K];
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}

// Better Approach
#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0 ; i < n; i++) { 
        int sum = 0;
        for (int j = i; j < n; j++) { 
            sum+=arr[j];
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}

// Optimal Approach
#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size();
    unordered_map <int,int> mpp;
    int preSum = 0, cnt = 0;
    mpp[0] = 1;
    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }
    return cnt;
}
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
