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

class Derived: protected Base1, public Base2
{
	protected:
		int num3;
		int sum;
	public:
		void getdata();
		void display();
};

void Derived::getdata()
{
	cout<<"\n Enter 3 numbers : ";
	cin>>num1>>num2>>num3;
	sum=num1+num2+num3;
}

void Derived::display()
{
	cout<<"\n Sum of "<<num1<<", "<<num2<<" and "<<num3<<" is "<<sum;
}

int main()
{
	Derived obj;
	obj.getdata();
	obj.display();
	return 0;
}
