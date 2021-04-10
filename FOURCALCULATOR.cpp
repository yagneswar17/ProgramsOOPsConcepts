#include<iostream>

using namespace std;

int main()
{
	int a,b,ans;
	char op;
	cout<<"\n Enter any two integers: ";
	cin>>a>>b;
	cout<<"\n Enter your operation: ";
	cin>>op;
	switch (op)
	{
		case '+':
			cout<<"\n Sum = "<<a+b;
			break;
		case '-':
			cout<<"\n Difference = "<<a-b;
			break;
		case '*':
			cout<<"\n Product = "<<a*b;
			break;
		case '/':
			cout<<"\n Division answer = "<<a/b;
			break;
		default:
			cout<<"\n Invalid Operation Entered!!!";
	}
	return 0;
}
