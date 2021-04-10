#include<iostream>

using namespace std;

class Base
{
	protected:
		int num1;
		float avg;
	public:
		Base()
		{
			cout<<"\n Base class Constructor Invoked!!!";
		}
};

class Intermediate:public Base
{
	protected:
		int num2;
};

class Derived: protected Intermediate
{
	protected:
		int num3;
	public:
		void getdata();
		void display();
};

void Derived::getdata()
{
	cout<<"\n Enter 3 numbers : ";
	cin>>num1>>num2>>num3;
	avg=(num1+num2+num3)/3;
}

void Derived::display()
{
	cout<<"\n Average of "<<num1<<", "<<num2<<" and "<<num3<<" is "<<avg;
}

int main()
{
	Derived obj;
	obj.getdata();
	obj.display();
	return 0;
}
