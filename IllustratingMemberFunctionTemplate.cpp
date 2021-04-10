#include<iostream>

using namespace std;

template<class T>

class data
{
	public:
		data (T c);
};

template<class T> data<T>::data (T c)
{
	cout<<"\n c = "<<c;
}

int main()
{
	data <char> h('A');
	data <int>  i(1020);
	data <float> j(4.235);
	return 0;
}
