// This program moves all the duplicate elements to the end of the sorted array and prints remaining array without duplicates.

#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void sortedDuplicate(int arr[], int n)
{
    int res = 0;// res points the index upto which there are no duplicates
    for(int i=1;i<n;i++)
    {
        if (arr[res] != arr[i])
        {
            res = res+1; // res is incremented when a distinct element is found
            arr[res] = arr[i]; // arr[res] is updated to arr[i] which is a distinct element
        }
    }
    printarray(arr,res+1);
}

int main()
{
    int arr[] = {10,20,20,30,30,30,30,40,50};
    int n = sizeof(arr)/sizeof(int); 
    sortedDuplicate(arr,n);       
}
