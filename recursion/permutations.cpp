// Program to clacualte all the permutations of a string 

#include<bits/stdc++.h>
using namespace std;

void permute(string &s, int i) //i keeps the track of the index from which swaping starts i.e. string before i is already fixed 
{
	if(i == s.size()-1)
	{
		cout<<s<<endl;
		return;
	}

	for(int j=i;j<s.size();j++)  
	{
		swap(s[i],s[j]); //index i and j are swapped 
		permute(s,i+1); //function is called recusively for every index starting from i to the last index
		swap(s[i],s[j]); //i and j are again swapped to retrun the stirng back to the previous state (backtracking)
	}
}

int main()
{
	string s = "ABCD";
	permute(s,0);
}