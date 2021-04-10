#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		A()
		{
			cout<<"\n Class A Constructor Invoked!!!";
		}
		class B
		{
			public:
				int y;
				B()
				{
					cout<<"\n Class B Constructor Invoked!!!";
				}
		};
};
class C: public A,A::B
{
	public:
		int z;
		void show()
		{
			cout<<"\n\n x = "<<x<<"\t y = "<<y<<"\t z = "<<z<<endl;
		}
		C()
		{
			cout<<"\n Class C Constructor Invoked";
		}
		C(int j,int k,int l)
		{
			x=j;
			y=k;
			z=l;
		}
};
int main()
{
	int num1,num2,num3;
	cout<<"\n Enter 3 numbers : ";
	cin>>num1>>num2>>num3;
	C obj(num1,num2,num3);
	obj.show();
	return 0;
}
