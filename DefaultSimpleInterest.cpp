#include<iostream>

using namespace std;

float SI(int p,float r=2.5,int t=2)
{
	return (p*r*t)/100;
}

int main()
{
	int P,T;
	float R;
	cout<<"\n Principal Amount = ";
	cin>>P;
	cout<<"\n Rate = ";
	cin>>R;
	cout<<"\n Time Taken = ";
	cin>>T;
	cout<<"\n Using Default Values : "<<endl;
	cout<<"\n Simple interest = "<<SI(P)<<endl;
	cout<<"\n Without Using Default Values : "<<endl;
	cout<<"\n Simple interest = "<<SI(P,R,T)<<endl;
	return 0;
}

