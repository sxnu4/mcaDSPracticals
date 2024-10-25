#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
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
    cout << "Array elements are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << "Array after Sorting: ";
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}