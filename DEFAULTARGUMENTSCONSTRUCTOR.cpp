#include<iostream>
#include<math.h>

using namespace std;

class power
{
	private:
		int num;
		int p;
		int ans;
	public:
		power(int n=9,int x=3);
		void show()
		{
			cout<<"\n"<<num<<" raise to "<<p<<" is "<<ans;
		}
};

power::power(int n,int x)
{
	num=n;
	p=x;
	ans=pow(n,p);
}

int main()
{
	power p1,p2(5);
	p1.show();
	p2.show();
	return 0;
}
