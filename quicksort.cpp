#include <bits/stdc++.h>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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
    cout << "Array after Sorting: ";
    quickSort(arr, 0, n - 1);
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
