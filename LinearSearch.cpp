// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      cout << "Element found at index " << i << endl;
      return;
    }
  }
  cout << "Element not found in the array." << endl;
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int target;
  cout << "Enter the element to search for: ";
  cin >> target;

  linearSearch(arr, n, target);

  return 0;
} 
