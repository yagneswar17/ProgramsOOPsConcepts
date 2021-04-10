#include<iostream>
using namespace std;

template <class T>

void add(T a,T b,T c=0,T d=0)
{
	if(c==0&&d==0)
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	else
	{
		cout<<"\n Complex Number 1 : "<<a<<" + "<<b<<"i";
		cout<<"\n Complex Number 2 : "<<c<<" + "<<d<<"i";
		cout<<"\n     Final Answer : "<<a+c<<" + "<<b+d<<"i";
	}
}

int main()
{
	int a,b;
	float p,q;
	double x_real,y_real,x_imag,y_imag;
	cout<<"\n Enter 2 integer values : ";
	cin>>a>>b;
	cout<<"\n Enter 2 float values : ";
	cin>>p>>q;
	cout<<"\n Enter Two complex numbers : ";
	cout<<"\n Complex Number1, Real part : ";
	cin>>x_real;
	cout<<"\n Complex Number1, Imaginary Part: ";
	cin>>x_imag;
	cout<<"\n Complex Number2, Real part : ";
	cin>>y_real;
	cout<<"\n Complex Number2,Imaginary part : ";
	cin>>y_imag;
	cout<<"\n Integer Answer : ";
	add(a,b);
	cout<<"\n Float Answer : ";
	add(p,q);
	cout<<"\n Complex Answer : ";
	add(x_real,x_imag,y_real,y_imag);
	return 0;
}
