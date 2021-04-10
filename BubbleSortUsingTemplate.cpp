#include<iostream>

using namespace std;

template <class S>

void BubSort(S arr[],int k)
{
	for(int i=0;i<k-1;i++)
		for(int j=k-1;j>i;j--)
			if(arr[j]<arr[j-1])
			{
				S temp;
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
}

int main()
{
	int A[100],i,n1,n2;
	float B[100];
	cout<<"\n Enter Integer array size : ";
	cin>>n1;
	cout<<"\n Enter Integer array elements : ";
	for(i=0;i<n1;i++)
		cin>>A[i];
	cout<<"\n Enter Float array size : ";
	cin>>n2;
	cout<<"\n Enter Float array elements : ";
	for(i=0;i<n2;i++)
		cin>>B[i];
	BubSort(A,n1);
	BubSort(B,n2);
	cout<<"\n Integer Array Elements are :  ";
	for(i=0;i<n1;i++)
		cout<<A[i]<<"  ";
	cout<<"\n Float Array Elements are :  ";
	for(i=0;i<n2;i++)
		cout<<B[i]<<"  ";
	return 0;
}
