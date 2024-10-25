#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    //Sonu Roll Number 24136
    int sum = 0;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    //Sonu Roll Number 24136
    cout << "Array elements are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    //Sonu Roll Number 24136
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        
    }
    //Sonu Roll Number 24136
    cout << "Sum of all Array Elements will be " << sum;

    return 0;
}