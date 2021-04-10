/* Matrix Multiplication using operator overloading.	*/
#include<iostream.h>
#include<conio.h>
#include<process.h>

class MAT
{ public:
	int a[10][10];
	int r,c;
 public:
	void getrc();
	friend void check(MAT,MAT);
	void get();
	void show();
	friend MAT operator *(MAT obj);
};
void MAT::getrc()
{
	cout<<"\n Enter row size : ";
	cin>>r;
	cout<<"\n Enter coloumn size : ";
	cin>>c;
}
void check(MAT a,MAT b)
{
	if(a.c!=b.r)
	{
		cout<<"\n Multiplication is not possible!!!";
		getch();
		exit(0);
	}
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
MAT operator *(MAT x,MAT y)
{
	int i,j,k;
	MAT temp;
	for(i=0;i<x.r;i++)
	{
		for(j=0;j<x.c;j++)
		{
			temp.a[i][j]=0;
			for(k=0;k<y.c;k++)
				temp.a[i][j]+=x.a[i][k]*y.a[k][j];
		}
	}
	temp.r=x.r;
	temp.c=y.c;
	return temp;
}
void main()
{
	clrscr();
	MAT m1,m2,m3;
	cout<<"\n Matrix 1 : ";
	m1.getrc();
	cout<<"\n Matrix 2 : ";
	m2.getrc();
	check(m1,m2);
	m3.r=m1.r;
	m3.c=m2.c;
	cout<<"\n Matrix 1 : ";
	m1.get();
	cout<<"\n Matrix 2 : ";
	m2.get();
	m3=m1*m2;
	cout<<"\n Matrix 1 : ";
	m1.show();
	cout<<"\n Matrix 2 : ";
	m2.show();
	cout<<"\n Matrix 3 : ";
	m3.show();
	getch();
}