#include<iostream>
using namespace std;


void num(int k)
{
	try
	{
		if(k==0)
			throw k;
		else if(k>0)
			throw k;
		else if(k<0)
			throw 0;
		cout<<"\n Try Block ";
	}
	catch(int)
	{
		cout<<"\n Caught an Exception "<<endl;
	}
}

int main()
{
	num(0);
	num(5);
	num(-1);
	return 0;
}
