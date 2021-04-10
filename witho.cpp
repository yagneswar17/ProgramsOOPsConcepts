#include <iostream>
#include<sstream>
#include<stdlib.h>
using namespace std;

int main() 
{
	int t,i,j,z,A[1000],sum=0;
	string Str;
	cin>>t;
	for(z=0;z<=t;z++)
	{
		getline(cin,Str);
		stringstream a(Str);
		i=0;
		while(a>>A[i])
		{
			++i;
		}
		if(z!=0)
		{
		sum=0;
		for(j=0;j<i;j++)
		{
			sum+=A[j];
			cout<<sum<<" ";
		}
		cout<<endl;
		}
	}
}
