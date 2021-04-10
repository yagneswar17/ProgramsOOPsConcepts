#include<iostream>

using namespace std;

class Sample
{
		int x;
	public:
		void get(int x)
		{
			this->x=x;
		}
		void display()
		{
			cout<<"\n x = "<<x;
		}
};

int main()
{
	Sample obj;
	int n;
	cout<<"\n Enter num : ";
	cin>>n;
	obj.get(n);
	obj.display();	
	return 0;
}
