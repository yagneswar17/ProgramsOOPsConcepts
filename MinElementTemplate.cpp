#include<iostream>
using namespace std;

template <class M>

int findmin(M arr[],int size)
{
	int ele,i;
	ele=arr[0];
	for(i=1;i<size;i++)
		if(arr[i]<ele)
		{
			ele=arr[i];
		}
	return ele;
}

int main()
{
	int A[100],n,i;
	cout<<"\n Enter size of an array : ";
	cin>>n;
	cout<<"\n Enter Array Elements : ";
	for(i=0;i<n;i++)
		cin>>A[i];
	cout<<"\n Minimum Value = "<<findmin(A,n);
	return 0;
}
