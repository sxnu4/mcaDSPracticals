#include <bits/stdc++.h>
using namespace std;
bool isAp(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    int diff;
    diff = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != diff)
        {
        cout << "\nArray is not an A.P.\n";
            return false;
        }
        return true;
    }
}
int main()
{
    int i, n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements :";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are :";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    while (isAp(arr, n))
    {
        if (true)
        {
            cout << "\nArray is an A.P.\n";
            break;
        }
        
    }

    // (isAp(arr, n)) ? (cout << "\nYes, Its an A.P." << endl) : (cout << "\nNo, Its not an A.P." << endl);
    return 0;
}