#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum subarray sum
int maxSubArraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        current_max = max(arr[i], current_max + arr[i]);
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}

int main() {
    int i, n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array: \n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are: " << endl;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " " << endl;
    }

    int max_sum = maxSubArraySum(arr, n);
    cout << "Maximum Subarray Sum is: " << max_sum << endl;

    return 0;
}
