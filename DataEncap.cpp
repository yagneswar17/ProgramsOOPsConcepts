#include<iostream>

using namespace std;

class Safe
{
	private:
		int data;
	public:
		void getdata()
		{
			cout<<"\n Enter data : ";
			cin>>data;
		}
		void display()
		{
			cout<<"\n Data = "<<data;
		}
};	// This class has binded data members and member functions into one unit.
	// And this is known has Encapsulation.

int main()
{
	Safe obj;
	// cin>>data;	//Error because the data is private and cannot accessable to outside function
	obj.getdata();	// Only member functions of that class can access the data 
	obj.display();	// And hence this is an example of data hiding.
	return 0;	
}
