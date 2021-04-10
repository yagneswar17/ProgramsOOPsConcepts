#include<iostream>

using namespace std;


int main()
{
	int ip,save,num,fact,sum=0;
	cout<<"Enter number to check: ";
	cin>>ip;
	save=ip;
	
	while(ip)
	{
		num=ip%10;
		fact = 1;
		for(int i=num;i>0;i--)
		{
			fact=fact*i;
		}
		sum+=fact;
		ip/=10;
	}

	if(sum==save)
	{
		cout<<save<<" is a Strong Number";
	}
	else
	{
		cout<<save<<" is not a Strong Number";
	}

	return 0;
}
