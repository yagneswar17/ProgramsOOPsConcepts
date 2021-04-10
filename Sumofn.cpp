#include<iostream>

using namespace std;

int main()
{
    int n,i,arr[100],sum=0;
    cout<<"\n Enter n : ";
    cin>>n;
    cout<<"\n Enter "<<n<<" different numbers : "<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
    	sum+=arr[i];
	}
	cout<<"\n Sum = "<<sum;
	return 0;
}
	
