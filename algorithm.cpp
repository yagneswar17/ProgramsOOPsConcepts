#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template <class T>

class display
{
	public:
		void operator() (const T& t)
		{
			cout<<t;
		}
};

int main()
{
	display<int> value;
	vector<int> data(5);
	for(int i=0;i<5;i++)
		data[i]=i*i*i;
	cout<<"\n Data is : ";
	for_each(data.begin(),data.end(),value);
	return 0;
}
