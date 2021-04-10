#include<iostream>

using namespace std;

class assign
{
		int num;
	public:
		void get()
		{
			cout<<"\n Enter Num : ";
			cin>>num;
		}
		void display()
		{
			cout<<"\n Num = "<<num<<endl;
		}
		void operator = (assign x)
		{
			num=x.num;
		}
};

int main()
{
	assign obj1,obj2;
	cout<<"\n Enter object 1 details :";
	obj1.get();
	cout<<"\n Enter object 2 details :";
	obj2.get();
	cout<<"\n Before operation : "<<endl;
	obj1.display();
	obj2.display();
	obj2=obj1;
	cout<<"\n After operation : "<<endl;
	obj1.display();
	obj2.display();
	return 0;
}
