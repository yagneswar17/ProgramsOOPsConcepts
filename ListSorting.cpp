#include<iostream>
#include<list>
using namespace std;

void display(list <int> &num)
{
	list<int>::iterator n;
	for(n=num.begin();n!=num.end();++n)
		cout<<*n<<" ";
}

int main()
{
	list <int> list;
	int a;
	char ch='y';
	do
	{
		cout<<"\n Enter Number : ";
		cin>>a;
		list.push_back(a);
		cout<<"Want to enter more elements (Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	cout<<"\n Original List : ";
	display(list);
	cout<<"\n    Final List : ";
	list.sort();
	display(list);
	return 0;
}
