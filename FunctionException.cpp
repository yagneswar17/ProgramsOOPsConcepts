#include<iostream>

using namespace std;

void Divide()
{
	int a,b;
	cout<<"\n Enter a and b : ";
	cin>>a>>b;
	if(b!=0)
	{
		cout<<"\n a/b = "<<a/b<<endl;
	}
	else
	{
		throw(a);
	}
}

int main()
{
	try
	{
		Divide();
		Divide();
	}
	catch(int temp)
	{
		cout<<"\n Caught an exception!!!";
	}
	return 0;
}
