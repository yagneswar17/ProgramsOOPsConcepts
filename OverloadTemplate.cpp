#include<iostream>
using namespace std;

template <class T>

void display(T m)
{
	cout<<"\n Template Variable = "<<m;
}
void display(int n)
{
	cout<<"\n Integer Variable = "<<n;
}
void display(double o)
{
	cout<<"\n Double Variable = "<<o;
}
int main()
{
	display('C');
	display(44);
	display(36.9);
	display("CAT");
	return 0;
}
