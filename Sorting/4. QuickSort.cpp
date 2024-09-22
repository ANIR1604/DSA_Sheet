#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n) {
	
	cout << "After quick sort: " << "\n";
  	for (int i = 0; i < n; i++) {
    	cout << a[i] << " ";
  	}
}

int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before quick sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  insertion_sort(arr, n);
  return 0;
}
