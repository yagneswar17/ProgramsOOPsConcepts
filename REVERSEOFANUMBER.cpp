#include<iostream>

using namespace std;

int main()
{
	int num,save,rem,newnum=0;
	cout<<"\n Enter number : ";
	cin>>num;
	save=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		newnum=(newnum*10)+rem;
	}
	cout<<"\n Reverse Number = "<<newnum;
	return 0;
}
