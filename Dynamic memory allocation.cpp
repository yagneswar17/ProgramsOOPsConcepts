#include<iostream>

using namespace std;

int a=100;

int main()
{
	int i,total,*ptr,a=10;
	cout<<"\n a = "<<a<<"\t ::a = "<<::a<<endl;
	cout<<"\n Enter total number of students : ";
	cin>>total;
	ptr=new int[total];
	cout<<"\n Enter Roll number of students : "<<endl;
	for(i=0;i<total;i++)
	{
		cout<<"\n Student "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<"\n Displaying Students Roll Numbers : "<<endl;
	for(i=0;i<total;i++)
		cout<<"\n Student "<<i+1<<" : "<<*(ptr+i)<<endl;
	delete ptr;
	return 0;
}

