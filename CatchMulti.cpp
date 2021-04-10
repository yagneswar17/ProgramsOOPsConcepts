#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\n Enter any integer : ";
	cin>>num;
	try
	{
		if(num==0)
			throw '0';
		else if(num>0)
			throw (unsigned int)num;
		else
			throw num;
	}
	catch(char ch)
	{
		cout<<"\n Caught Null Value ";
	}
	catch(unsigned int n)
	{
		cout<<"\n Caught Positive Value";
	}
	catch(int a)
	{
		cout<<"\n Caught Negative Value";
	}
	return 0;
}
