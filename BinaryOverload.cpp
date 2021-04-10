#include<iostream>

using namespace std;

class UMF
{
		int x,y;
	public:
		void get()
		{
			cout<<"\n Enter x : ";
			cin>>x;
			cout<<"\n Enter y : ";
			cin>>y;
		}
		void display()
		{
			cout<<"\n X = "<<x<<"\t Y = "<<y;
		}
		UMF operator +(UMF);
		friend UMF operator *(UMF,UMF);
};

UMF UMF::operator +(UMF tobj)
{
	UMF temp;
	temp.x=x+tobj.x;
	temp.y=y+tobj.y;
	return temp;
}

UMF operator *(UMF a,UMF b)
{
	UMF temp;
	temp.x=a.x*b.x;
	temp.y=a.y*b.y;
	return temp;
}
int main()
{
	UMF obj1,obj2,obj3,obj4;
	cout<<"\n Enter object 1 details : "<<endl;
	obj1.get();
	cout<<"\n Enter object 2 details : "<<endl;
	obj2.get();
	cout<<"\n Object 1 output : "<<endl;
	obj1.display();
	cout<<"\n Object 2 output : "<<endl;
	obj2.display();
	cout<<"\n Performing object 3 = object 1 + object 2 : ";
	obj3=obj1+obj2;
	cout<<"\n Object 3 output : "<<endl;
	obj3.display();
	cout<<"\n Performing object 4 = object 1 * object 2 : ";
	obj4=obj2*obj1;
	cout<<"\n Object 4 output : "<<endl;
	obj4.display();
	return 0;
}

