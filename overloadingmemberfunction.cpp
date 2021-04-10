#include<iostream>

using namespace std;

class Product
{
	private:
		int a,b,c;
	public:
		void getdata(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		int pro(int num1,int num2)
		{
			return num1*num2;
		}
		int pro(int num1,int num2,int num3)
		{
			return num1*num2*num3;
		}
};

int main()
{
	int x,y,z;
	Product obj;
	cout<<"\n Enter a, b and c : ";
	cin>>x>>y>>z;
	obj.pro(x,y,z);
	cout<<"\n "<<x<<" * "<<y<<" = "<<obj.pro(x,y)<<endl;
	cout<<"\n "<<x<<" * "<<y<<" * "<<z<<" = "<<obj.pro(x,y,z)<<endl;
	return 0;
}
