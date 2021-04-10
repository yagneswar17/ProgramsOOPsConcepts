#include<iostream>

using namespace std;

class one
{
	public:
		class two
		{
			public:
				void display()
				{
					cout<<"\n Nested Class Demonstratioin";
				}
		};
};

int main()
{
	one::two x;
	x.display();
	return 0;
}
