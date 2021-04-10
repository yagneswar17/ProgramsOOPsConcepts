#include<iostream>

using namespace std;

class Base
{
	protected:
		int num1;
		float avg;
};

class Derived1:public Base
{
	public:
		int num2;
		void get()
		{
			cout<<"\n Enter num1 : ";
			cin>>num1;
			cout<<"\n Enter num2 : ";
			cin>>num2;
		}
		void display()
		{
			cout<<"\n"<<num1<<" + "<<num2<<" = "<<num1+num2;
		}
};

class Derived2: protected Base
{
	protected:
		int num3;
	public:
		void getdata()
		{
			cout<<"\n Enter num1 : ";
			cin>>num1;
			cout<<"\n Enter num3 : ";
			cin>>num3;
		}
		void putdata()
		{
			cout<<"\n"<<num1<<" + "<<num3<<" = "<<num1+num3;
		}
};

int main()
{
	Derived1 obj1;
	Derived2 obj2;
	obj1.get();
	obj2.getdata();
	obj1.display();
	obj2.putdata();
	return 0;
	
	
}
