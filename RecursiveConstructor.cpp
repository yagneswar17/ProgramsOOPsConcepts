#include<iostream>
#include<process.h>
using namespace std;

class TN
{
	private:
		int f;
	public:
		TN()
		{
			f=0;
		}
		TN(int m)
		{
			cout<<"\n Triangle Number : "<<m;
			if(m==0)
			{
				exit (0);
			}
			TN(--m);
		}
};

int main()
{
	TN obj(5);
	return 0;
}
