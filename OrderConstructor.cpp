#include<iostream>

using namespace std;

class Base1
{
	protected:
		int a;
	public:
		Base1()
		{
			cout<<"\n Base1 constructor invoked!!! ";
		}
		~Base1()
		{
			cout<<"\n Base1 destructor invoked!!! ";
		}
};
class Base2
{
	public:
		int b;
		Base2()
		{
			cout<<"\n Base2 constructor invoked!!! ";
		}
		~Base2()
		{
			cout<<"\n Base2 destructor invoked!!! ";
		}
};
class Derived: public Base1,protected Base2
{
		int c;
	public:
		Derived()
		{
			cout<<"\n Derived constructor invoked!!! ";
		}
		~Derived()
		{
			cout<<"\n Derived destructor invoked!!! ";
		}
		void get()
		{
			cout<<"\n Enter 3 numbers : ";
			cin>>a>>b>>c;
		}
		void display()
		{
			cout<<"\n Sum = "<<a+b+c;
		}
};
int main()
{
	Derived obj;
	obj.get();
	obj.display();
	return 0;
}
