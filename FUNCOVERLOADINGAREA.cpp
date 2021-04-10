#include<iostream>

using namespace std;

#define PI 3.14

float area(int r)
{
	return PI*r*r;
}

float area(int l,int w)
{
	return l*w;
}

float area(float b,float h)
{
	return 0.5*b*h;
}

int main()
{
	int radius,length,width;
	float base,height;
	cout<<"\n Circle : "<<endl;
	cout<<"\n Enter Radius : ";
	cin>>radius;
	cout<<"\n Area = "<<area(radius)<<endl;
	cout<<"\n Rectangle : "<<endl;
	cout<<"\n Enter Length : ";
	cin>>length;
	cout<<"\n Enter Width : ";
	cin>>width;
	cout<<"\n Area = "<<area(length,width)<<endl;
	cout<<"\n Triangle : "<<endl;
	cout<<"\n Enter Base : ";
	cin>>base;
	cout<<"\n Enter Height : ";
	cin>>height;
	cout<<"\n Area = "<<area(base,height)<<endl;
	return 0;
}
