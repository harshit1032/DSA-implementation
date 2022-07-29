// This program moves all the zeros present in the array to the end of the array.
// For example {8,5,0,0,7,0,9,6} will be converted to {8,5,7,9,6,0,0,0}. 
// We can notice here that the order of non zero elements should remain the same. 

#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void zerosEnd(int arr[], int n)
{
    int res = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[res]);
            res++;
        }
    }
    printarray(arr,n);
}

int main()
{
    int arr[] = {10,20,0,0,0,30,40};
    int n = sizeof(arr)/sizeof(int); 
    zerosEnd(arr,n);       
}