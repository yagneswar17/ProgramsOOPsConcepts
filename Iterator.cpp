#include<iostream>
#include<list>
using namespace std;

typedef list<int> num;

int main()
{
	num n;
	for(int i=0;i<=5;i++)
		n.push_back(i*i);
	for(num::const_iterator ls=n.begin();ls!=n.end();++ls)
		cout<<*ls<<" ";
	return 0;
}
