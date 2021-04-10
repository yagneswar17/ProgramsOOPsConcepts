#include<iostream>

using namespace std;

class UMF
{
		int x,y;
	public:
		void get()
		{
			cout<<"\n Enter x : ";
			cin>>x;
			cout<<"\n Enter y : ";
			cin>>y;
		}
		void display()
		{
			cout<<"\n X = "<<x<<"\t Y = "<<y;
		}
		void operator ++();		
		friend void operator --(UMF);
};

void UMF::operator ++() 	//Member Function
{
	++x;
	++y;
}

void operator --(UMF a)		//Non Member Function
{
	--a.x;
	--a.y;
	a.display();
}

int main()
{
	UMF obj1,obj2;
	cout<<"\n Enter object 1 details : "<<endl;
	obj1.get();
	cout<<"\n Enter object 2 details : "<<endl;
	obj2.get();
	cout<<"\n Performing Decrement operation on object 1 : ";
	--obj1;
	cout<<"\n Final object 1 output : "<<endl;
	obj1.display();
	cout<<"\n Performing Increment operation on object 2 : ";
	++obj2;
	cout<<"\n Final object 2 output : "<<endl;
	return 0;
}

