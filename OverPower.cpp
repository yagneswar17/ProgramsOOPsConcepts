#include<iostream>
#include<math.h>

using namespace std;

int Power(int p,int q)
{
	return pow(p,q);
}

float Power(float p,float q)
{
	return pow(p,q);
}

int main()
{
	int a,b;
	float x,y;
	cout<<"\n Enter 2 integers : ";
	cin>>a>>b;
	cout<<"\n Enter 2 float numbers : ";
	cin>>x>>y;
	cout<<"\n Integer answer : "<<Power(a,b)<<endl;
	cout<<"\n Float no. answer : "<<Power(x,y);
	return 0;
}
