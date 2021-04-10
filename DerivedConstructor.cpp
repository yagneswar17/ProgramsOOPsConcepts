#include<iostream>

using namespace std;

class Base1
{
	protected:
		int num1;
	public:
		Base1()
		{
			cout<<"\n Base1 Constructor Invoked!!!";
		}
		~Base1()
		{
			cout<<"\n Base1 Destructor Invoked!!!";
		}
};

class Base2
{
	protected:
		int num2;
	public:
		Base2()
		{
			cout<<"\n Base2 Constructor Invoked!!!";
		}
		~Base2()
		{
			cout<<"\n Base2 Destructor Invoked!!!";
		}
};

class Derived: protected Base1, public Base2
{
	protected:
		int num3;
		int sum;
	public:
		Derived()
		{
			cout<<"\n Derived Constructor Invoked!!!";
		}
		~Derived()
		{
			cout<<"\n Derived Destructor Invoked!!!";
		}
		void getdata();
		void display();
};

void Derived::getdata()
{
	cout<<"\n\n Enter 3 numbers : ";
	cin>>num1>>num2>>num3;
	sum=num1+num2+num3;
}

void Derived::display()
{
	cout<<"\n Sum of "<<num1<<", "<<num2<<" and "<<num3<<" is "<<sum<<endl;
}

int main()
{
	Derived obj;
	obj.getdata();
	obj.display();
	return 0;
}
