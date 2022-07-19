 // This program uses recursion and backtracking to generate all possible subsets of a given array

#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> &ds)
{
	for(int i=0;i<ds.size();i++)
	{
		cout<<ds[i]<<" ";
	}
	cout<<endl;
}

void subset(vector<int> &arr,int i,vector<int> &ds)
{
	if(i >= arr.size())
	{
		printarr(ds);
		return;	
	}
	ds.push_back(arr[i]);
	subset(arr,i+1,ds);
	ds.pop_back();
	subset(arr,i+1,ds);
}

int main()
{
	vector<int> arr = {10, 5, 2, 3, 6};
	int i = 0;
	vector<int> ds;
	subset(arr,i,ds);
}
