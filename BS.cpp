#include <bits/stdc++.h>
using namespace std;
bool BinarySearch()
{
    int n;
    int arr;
    int key;
    int low = 0, high = n - 1, mid, key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        key = arr[mid];
        if (key == mid)
        {
            return mid;
        }
        else if (key > mid)
        {
            return BinarySearch();
        }
        else
        {
            return BinarySearch();
        }
    }
    return -1;
}
void insertionSort()
{
    int arr;
    int i;
    int n;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int i, n;
    int key;
    // Sonu Roll Number 24136
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the keys of Array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sonu Roll Number 24136
    cout << "Array keys are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    insertionSort();
    cout << "Eneter the key you wanna search in Array: ";
    cin >> key;
    // BinarySearch(arr, n);
    int result;
    result = BinarySearch();
    if (result != -1)
    {
        cout << "key found at index " + result << endl;
    }
    else
    {
        cout << "\nkey not found.";
    }
    return 0;
}