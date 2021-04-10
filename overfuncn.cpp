#include<iostream>

using namespace std;

int sum(int a, int b)
{
	return a+b;
}

float sum(float a, float b)
{
	return a+b;
}

int main()
{
	int num1,num2;
	float num3,num4;
	cout<<"\n Enter 2 Integers : ";
	cin>>num1>>num2;
	cout<<"\n Enter 2 Decimal numbers  : ";
	cin>>num3>>num4;
	cout<<"\n"<<num1<<" + "<<num2<<" = "<<sum(num1,num2);
	cout<<"\n"<<num3<<" + "<<num4<<" = "<<sum(num3,num4);
	return 0;
}
