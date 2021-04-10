#include<bits/stdc++.h>

using namespace std;

int Compare(int i,int j,string *L,string *R,int l1,int l2)
{
	if(i>=l1&&j>=l2)
	{
		return 0;
	}
	if(L[i]==R[j])
	{
		count++;
		i++;
		j++;
		return Compare(i,j,L,R,l1,l2);
	}
	return Compare(i++,j,L,R,l1,l2);
	return Compare(i,j++,L,R,l1,l2);
	return count;
}

int main()
{
	int l1,l2;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	l1=s1.length();
	l2=s2.length();
	string *l,*r;
	l=&s1;
	r=&s2;
	cout<<Compare(0,0,l,r,l1,l2);
	return 0;
}
