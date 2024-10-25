#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
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
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements are: "<<endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }
    cout << "Array after Sorting: " ;
    insertionSort(arr, n);
    return 0;
}