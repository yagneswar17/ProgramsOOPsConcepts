
#include<iostream>

using namespace std;

int SumFactorialDigits(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==n)
		{
			sum+=i;
			
			cout<<i<<" ";
		}
	}
	return sum;
}

int main()
{
	int n,p;
	cin>>n;
	p=SumFactorialDigits(n);
	cout<<p;
	return 0;
}
