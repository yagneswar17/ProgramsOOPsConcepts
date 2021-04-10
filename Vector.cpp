#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> obj;
	int num,i;
	char ch='y';
	do
	{
		cout<<"\n Enter Number : ";
		cin>>num;
		obj.push_back(num);
		cout<<"Want to enter more elements (Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	cout<<"\n The elements are : ";
	for(i=0;i<obj.size();i++)
	{
		cout<<obj[i]<<" ";
	}
	return 0;
}
