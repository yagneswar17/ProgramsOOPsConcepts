/* Matrix Addition using operator overloading and friend function	*/
#include<iostream>
#include<process.h>

using namespace std;

class MAT
{ 
	private:
		int a[10][10];
		int r,c;
 	public:
		void getrc(int,int);
		void get();
		void show();
		friend MAT operator +(MAT obj1,MAT obj2);
};

void MAT::getrc(int row,int col)
{
	r=row;
	c=col;
}

void MAT::get()
{
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
}

void MAT::show()
{
	int i,j;
	for(i=0;i<r;i++)
	{
		cout<<"\n";
		for(j=0;j<c;j++)
			cout<<"\t"<<a[i][j];
	}
}
MAT operator +(MAT x,MAT y)
{
	int i,j,k;
	MAT temp;
	temp.getrc(x.r,x.c);
	for(i=0;i<x.r;i++)
	{
		for(j=0;j<x.c;j++)
		{
			temp.a[i][j]=x.a[i][j]+y.a[i][j];
		}
	}
	return temp;
}

int main()
{
	int row,col;
	MAT m1,m2,m3;
	cout<<"\n Enter row size : ";
	cin>>row;
	cout<<"\n Enter coloumn size : ";
	cin>>col;
	m1.getrc(row,col);
	m2.getrc(row,col);
	m3.getrc(row,col);
	cout<<"\n Enter Matrix 1 elements : ";
	m1.get();
	cout<<"\n Enter Matrix 2 elements : ";
	m2.get();
	m3=m1+m2;
	cout<<"\n\n Matrix 1 : "<<endl;
	m1.show();
	cout<<"\n\n Matrix 2 : "<<endl;
	m2.show();
	cout<<"\n\n Sum of Matrix 1 and Matrix 2 : "<<endl;
	m3.show();
	return 0;
}
