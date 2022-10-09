// Calculates maximum diffrernce between arr[i] and arr[j] for i > j.
// Ex : arr[] = {2,3,10,6,4,8,1} O/P: 8
#include<bits/stdc++.h>
using namespace std;

void maxdiff(int arr[], int n)
{
	int min = arr[0];
	int diff = arr[1] - arr[0];
	for(int i=1;i<n;i++)
	{
		if(diff<arr[i]-min)
		{
			diff = arr[i]-min;
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	cout<<diff;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(int);
    maxdiff(arr,n);
}
