#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n) {
	for (int i=0; i<n-1;i++){
		int mini = i;
		for (int j=i; j<=n-1; j++){
			if(arr[j]<arr[mini]){
				mini = j;
			}
		}
		swap(arr[i],arr[mini]);
	}
	cout << "After selection sort: " << "\n";
  	for (int i = 0; i < n; i++) {
    	cout << arr[i] << " ";
  	}
}


int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}
