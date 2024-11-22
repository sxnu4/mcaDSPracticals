#include<bits/stdc++.h>
using namespace std;

// Function to perform binary search
int Binarysearch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If found at mid, then return it
        if (x == arr[mid])
            return mid;

        // Search the left half
        if (x < arr[mid])
            return Binarysearch(arr, low, mid - 1, x);

        // Search the right half
        return Binarysearch(arr, mid + 1, high, x);
    }

    // Element is not present in array
    return -1;
}

int main() {
    int n, x;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the arr Elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array
    for (int i = 0; i < n - 1; i++) {
        int m_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[m_index])
                m_index = j;
        }
        if (m_index != i)
            swap(arr[m_index], arr[i]);
    }

    cout << "Array after sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nEnter the element you wanna search in list: ";
    cin >> x;

    int result = Binarysearch(arr, 0, n - 1, x);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in array." << endl;
    }

    return 0;
}
