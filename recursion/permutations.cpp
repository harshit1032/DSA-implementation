#include<bits/stdc++.h>
using namespace std;

void permute(string s, int i)
{
	if(i == s.size()-1)
	{
		cout<<s<<endl;
		return;
	}

	for(int j=i;j<s.size();j++)
	{
		swap(s[i],s[j]);
		permute(s,i+1);
		swap(s[i],s[j]);
	}
}

int main()
{
	string s = "ABC";
	permute(s,0);
}