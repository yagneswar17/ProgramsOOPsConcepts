#include<iostream>

using namespace std;

int main()
{
	int num;
	lb:
		cout<<"\n Enter Any Integer : ";
		cin>>num;
		if(num>0)
			goto lb;
		return 0;
}
