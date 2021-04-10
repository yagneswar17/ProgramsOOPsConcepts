#include<iostream>

using namespace std;

inline float area(int base,int height)
{
	return 0.5*base*height;
}

int main()
{
	int b,h;
	cout<<"\n Enter base : ";
	cin>>b;
	cout<<"\n Enter height : ";
	cin>>h;
	cout<<"\n Area of Triangle = "<<area(b,h);
	return 0;
}
