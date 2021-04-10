#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> item_map;
int main()
{
	int sz;
	string item_name;
	int codeno;
	item_map item;
	cout<<"enter item name and code no number for 2 items: \n";
	for(int i=0;i<2;i++)
	{
		cin>>item_name;
		cin>>codeno;
		item[item_name]=codeno;
	}
	item["pc"]=2510;
	item.insert(pair<string,int> ("printer",2211));
	sz=item.size();
	cout<<"\n size of map:"<<sz<<"\n\n";
	cout<<"list of item name and code numbers \n";
	item_map::iterator t;
	for(t=item.begin();t!=item.end();t++)
	cout<<(*t).first <<" "<<(*t).second<<"\n";
	cout<<"\n";
	cout<<"enter item name:";
	cin>>item_name;
	codeno=item[item_name];
	cout<<"code number:"<<codeno<<"\n";
	return 0;
}
