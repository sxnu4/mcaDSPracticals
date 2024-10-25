#include<bits/stdc++.h>
using namespace std;
void max(int arr[], int  n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    if (arr[i] > max)
    max = arr[i];
    cout << "\nMaximum element is " << max << endl;
    }

int main(){
    int i,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
        }
        cout<<"Array elements are: ";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
            }
        max(arr,n);

    return 0;
}