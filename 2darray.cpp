#include <bits/stdc++.h>
using namespace std;

void Array()
{
    int i, j;
    int sum=0;
    int row, col;
    cout << "enter the number of rows: ";
    cin >> row;
    cout << "enter the number of columns: ";
    cin >> col;
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "enter the Array element: ";
            cin >> arr[i][j];
        }
    }
    cout << "Array will be: \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
    cout<<"And the summ of all elements will be ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum+=arr[i][j];
            
        }
    }
    cout<<"'"<<sum<<"'";
    // cout<<":)";
}
int main()
{

    Array();
    return 0;
}