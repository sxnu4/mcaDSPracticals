#include<bits/stdc++.h>
using namespace std;
int Binarysearch(){
    int x;
    int i,n,j;
    int low=i;
    int high=n-1;
    int mid;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the arr Elements: \n";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
       int m_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[m_index])
                m_index = j;
        }

        if (m_index != i)
            swap(arr[m_index], arr[i]);
    }
    cout<<"Array after sort: ";
    for (i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }    
    cout<<"\nEnter the element you wanna search in list: ";
    cin>>x;

    if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (x == arr[mid])
      return mid;

    // Search the right half
    if (x > arr[mid])
        return Binarysearch();

    if (x < arr[mid])
    // Search the right half
         return Binarysearch();
  }

  return -1;

    
}
int main(){
    int result;
    result=Binarysearch();
    if(result!=-1){
    cout<<"Element found at index"<<result;

    }
    
    return 0;
}