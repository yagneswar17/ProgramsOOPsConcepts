#include<iostream>

using namespace std;

class Base
{
	protected:
		int a;
};
class Derived:public Base
{
	private:
		int b;
	public:
		void getdata();
		void display();
};
void Derived::getdata()
{
	cout<<"\n Enter a & b : ";
	cin>>a>>b;
}
void Derived::display()
{
	cout<<"\n a = "<<a<<"\t b = "<<b<<endl;
}
int main()
{
	Derived obj;
	obj.getdata();
	obj.display();
	return 0;
}
