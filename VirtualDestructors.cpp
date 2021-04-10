#include<iostream>

using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"\n Base Class Constructor Invoked!!!";
		}
		virtual ~Base()	//Virtual Destructor 
		{
			cout<<"\n Base Class Destructor Invoked!!!";
		}
};

class Derived: public Base
{
	public:
		Derived()
		{
			cout<<"\n Derived Class Constructor Invoked!!!";
		}
		~Derived()
		{
			cout<<"\n Derived Class Destructor Invoked!!!";
		}
};

int main()
{
	Base *ptr;
	ptr=new Derived;
	delete ptr;
	return 0;
}
