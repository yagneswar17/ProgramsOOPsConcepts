/* Program to perform GCD using recursion function	*/

#include<iostream>

using namespace std;

int GCD(int x,int y)
{
	if(x>y)
		GCD(x-y,y);
	else if(y>x)
		GCD(x,y-x);
	else
		return x;
}

int main()
{
	int a,b,gcd,LCM;
	cout<<"\n Enter 2 numbers : ";
	cin>>a>>b;
	gcd=GCD(a,b);
	LCM=(a*b)/gcd;
	cout<<"\n GCD = "<<gcd;
	cout<<"\n LCM = "<<LCM;
	return 0;
}
