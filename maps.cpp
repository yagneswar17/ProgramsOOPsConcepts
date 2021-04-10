#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef map<string,int> obj;

int main()
{
	int size;
	string name;
	int code;
	obj object;
	char ch='y';
	do
	{
		cout<<"\n Enter object name : ";
		cin>>name;  
		cout<<"\n Enter code number : ";
		cin>>code;
		object[name]=code;
		cout<<"\n Want to Enter more (Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	size=object.size();
	cout<<"\n Size of map : "<<size<<endl;
	cout<<"\n Objects names and code numbers are : "<<endl;
	obj::iterator i;
	for(i=object.begin();i!=object.end();i++)
		cout<<(*i).first<<" "<<(*i).second<<endl;
	cout<<"\n Enter object name : ";
	cin>>name;
	code=object[name];
	cout<<"\n Code number : "<<code<<endl;
	return 0;
}
