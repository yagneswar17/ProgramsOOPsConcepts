#include<iostream>

using namespace std;

class Base
{
	private:
		int b;
	public:
		Base()
		{
			b=10;
		}
		virtual void display()
		{
			cout<<"\n b = "<<b;
		}
};

class Derived:public Base
{
	private:
		int d;
	public:
		Derived()
		{
			d=20;
		}
		void display()
		{
			cout<<"\n d = "<<d;
		}
};

int main()
{
	Base B,*ptr;
	Derived D;
	ptr=&B;
	ptr->display();
	ptr=&D;
	ptr->display();
	return 0;
}
