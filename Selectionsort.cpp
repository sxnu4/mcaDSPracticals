#include<bits/stdc++.h>
using namespace std;
void Sort(){
    int i,j;
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in
        // unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
void Array(){
    
}
int main(){

    
    return 0;
}