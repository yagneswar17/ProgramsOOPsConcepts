#include<iostream>
using namespace std;

class OnePlus
{
	private:
		int num;
	public:
		void get()
		{
			cout<<"\n Enter num : ";
			cin>>num;
		}
		void operator ++(int);		//postfix notation
		void operator ++();		//prefix notation
		void show()
		{
			cout<<"\t Num = "<<num;
		}
};
void OnePlus::operator ++() 
{
	++num;
}
void OnePlus::operator ++(int)
{
	num++;	
}
int main()
{
	OnePlus Obj1,Obj2;
	cout<<"\n Object 1 : ";
	Obj1.get();
	cout<<"\n Object 2 : ";
	Obj2.get();
	++Obj1;
	Obj2++;
	cout<<"\n Object 1 : ";
	Obj1.show();
	cout<<"\n Object 2 : ";
	Obj2.show();
	return 0;
}
