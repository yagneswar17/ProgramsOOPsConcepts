#include<iostream>
#include<list>
using namespace std;
typedef list<int> num_list;
int main()
{
	num_list num;
	for(int j=0;j<=5;++j)
	num.push_back(j);
	for(num_list::const_iterator ls=num.begin();ls!=num.end();++ls)
	cout<<*ls<<"";
	return 0;
}
