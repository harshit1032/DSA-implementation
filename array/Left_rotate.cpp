#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void rev(int arr[], int a, int b)
{
    for(int i=a,j=b;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
}

void leftRotate(int arr[], int n, int b)
{
    rev(arr,0,b-1);
    rev(arr,b,n-1);
    rev(arr,0,n-1);
    printarray(arr,n);
}

int main()
{
    int arr[] = {10,5,30,15};
    int n = sizeof(arr)/sizeof(int);
    leftRotate(arr,n,3);
}
