#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<class s>
class show
{
	public:
		void operator() (const s& S)
		{
			cout<<S;
		}
};
int main()
{
	show<int> showvalue;
	vector<int> vi(4);
	for(int j=0;j<4;++j)
	vi[j]=j;
	cout<<"for each() \n";
	for_each(vi.begin(),vi.end(),showvalue);
	cout<<"\n";
	return 0;
}
