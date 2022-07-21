

#include<bits/stdc++.h>
using namespace std;

void toh(int n,char A,char C,char B) // from A to C using B 
{
	if(n==1)
	{
		cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
		return;
	}
	toh(n-1,A,B,C); //  we first move n-1 rods from A to B using C
	cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl; // after that we move nth rod from A to C
	toh(n-1,B,C,A);  // now we move n-1 rods from B to C using A
}
int main()
{
	int n = 4;
	toh(4,'A','C','B'); // A C B are the names of rod
} 