// This program finds the index of second largest element in the array. 
// If no second largest element is present then -1 is printed.

#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int max = 0;
    int secondmax = -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            secondmax = max;
            max = i;
        }
        else if(arr[i] < arr[max] && (secondmax == -1 || arr[i]>arr[secondmax]))
        {
            secondmax = i;
        }
    }  
    return secondmax;  
}

int main()
{
    int arr[] = {108,67,34,32,55,99,44};
    int n = sizeof(arr)/sizeof(int);
    cout<<secondLargest(arr,n);        
}
