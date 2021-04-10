#include <iostream>
#include<sstream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main() 
{
	long long int R,i,j,z,x[10000],y[10000],X,Y,ans=0,res=0;
	string Str;
	i=0;
	cin>>R;
	while(!cin.eof())
	{
		cin>>x[i]>>y[i];
		i++;
		cout<<i;
	}
	for(j=0;j<i;j++)
	{
		X=x[j]*x[j];
		Y=y[j]*y[j];
		if(ans==0)
			ans=res=sqrt(X+Y);
		else
			res=sqrt(X+Y);
		if(res<ans)
		{
			z=j;
			ans=res;
		}
	}
	cout<<x[z]<<" "<<y[z];
}

