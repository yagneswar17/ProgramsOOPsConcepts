#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	char name[44];
	int n;
	cout<<"\n Enter name : ";
	gets(name);
	cout<<"\n Enter n : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		puts(name);
		cout<<endl;
	}
	return 0;
}
