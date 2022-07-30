// This code rotates a given array by d places.  
// For example if the given array is {1,2,3,4,5} and d is 2 then the output is {3,4,5,1,2}

#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void rev(int arr[], int a, int d)
{
    for(int i=a,j=d;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
}

void leftRotate(int arr[], int n, int d)
{
    rev(arr,0,d-1);
    rev(arr,d,n-1);
    rev(arr,0,n-1);
    printarray(arr,n);
}

int main()
{
    int arr[] = {10,5,30,15};
    int n = sizeof(arr)/sizeof(int);
    leftRotate(arr,n,3);
}
