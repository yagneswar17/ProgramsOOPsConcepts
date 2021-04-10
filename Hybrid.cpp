#include<iostream>

using namespace std;

class Base1
{
	protected:
		int num1;
};

class Base2
{
	protected:
		int num2;
};

class Derived1: protected Base1
{
	protected:
		int num3;
};

class Derived2: public Base2
{
	protected:
		int num4;
};

class Final: public Derived1,private Derived2
{
	protected:
		int num5;
		int sum;
	public:
		void getdata();
		void display();	
};

void Final::getdata()
{
	cout<<"\n Enter 5 numbers : ";
	cin>>num1>>num2>>num3>>num4>>num5;
	sum=num1+num2+num3+num4+num5;
}

void Final::display()
{
	cout<<"\n Sum = "<<sum;
}

int main()
{
	Final obj;
	obj.getdata();
	obj.display();
	return 0;
}
