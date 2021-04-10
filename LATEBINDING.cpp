#include<iostream>

using namespace std;

float add(float a,float b)
{
	return a+b;
}

float sub(float a,float b)
{
	return a-b;
}

float mul(float a,float b)
{
	return a*b;
}

int main()
{
	int cho;
	float x,y;
	cout<<"\n Enter 2 Numbers : ";
	cin>>x>>y;
	cout<<"\n Enter choice :- (1=add, 2=difference, 3=product) : ";
	cin>>cho;
	float (*ptr)(float,float);	//Function pointer is created
	switch(cho)
	{
		case 1:
			ptr=add;
			break;
		case 2:
			ptr=sub;
			break;
		case 3:
			ptr=mul;
			break;
		default: cout<<"\n Invalid Choice!!!";
	}
	cout<<"\n Result = "<<ptr(x,y);
	return 0;
}
