/*							Subset sum problem
This program calculates count of those subsets whoose sum is equal to a given number
Sample input : arr = {10,5,2,3,6}
			   k   = 8
	  Output : 2
 Explanation : There are 2 subsets ({5,8} and {2,6}) for which the sum of elements is 8 so the output is 2
 */

#include<bits/stdc++.h>
using namespace std;

int sumcount(vector<int> &arr,int i,int &sum, int &k)
{
	if(i >= arr.size())
	{
		if(k == sum)
			return 1;
		return 0;		
	}
	sum = sum + arr[i];
	int s1 = sumcount(arr,i+1,sum,k);
	sum = sum - arr[i];
	int s2 = sumcount(arr,i+1,sum,k);
	return s1 + s2;
}

int main()
{
	vector<int> arr = {10, 5, 2, 3, 6};
	int i = 0;
	int sum = 0;
	int k = 8;
	cout<<sumcount(arr,i,sum,k);
}
