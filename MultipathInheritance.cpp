#include<iostream>

using namespace std;

class Base
{
	protected:
		int num1;
};

class Inter1: virtual public Base	//Virtual class declaration
{
	protected:
		int num2;
};

class Inter2: virtual public Base	//Virtual class declaration
{
	protected:
		int num3;
};

class Derived: public Inter1,Inter2
{
	protected:
		int num4;
	public:
		void getdata();
		void display();
};

void Derived::getdata()
{
	cout<<"\n Enter 4 numbers : ";
	cin>>num1>>num2>>num3>>num4;
}

void Derived::display()
{
	cout<<"\n Numbers = \t"<<num1<<"\t"<<num2<<"\t"<<num3<<"\t"<<num4;
}

int main()
{
	Derived obj;
	obj.getdata();
	obj.display();
	return 0;
}


