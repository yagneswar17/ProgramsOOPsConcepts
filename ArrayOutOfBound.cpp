#include<iostream>
using namespace std;

int main()
{
	int n,i,ind;
	cout<<"\n Enter array size : ";
	cin>>n;
	int arr[n];
	cout<<"\n Enter array elements : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	try
	{
		cout<<"\n Enter index number : ";
		cin>>ind;
		if(ind>n)
			throw(ind);
		cout<<"\n Element in index "<<ind<<" is : "<<arr[ind];
	}
	catch(int num)
	{
		cout<<"\n Array out of bound!!!";
		cout<<"\n Index number : "<<num<<" Not Initilized.";
	}
	return 0;
}
