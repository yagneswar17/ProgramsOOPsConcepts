/* Program illustrating this pointer. */
#include<iostream.h>
#include<conio.h>

class ABC
{
 private:
	int a;
	int b;
 public:
	void get(int,int);
	void SUM();
};
void ABC::get(int a,int b)
{
	this->a=a;
	this->b=b;
}
void ABC::SUM()
{
	cout<<"\n Sum = "<<a+b;
}
void main()
{
	clrscr();
	ABC obj;
	int a,b;
	cout<<"\n Enter a : ";
	cin>>a;
	cout<<"\n Enter b : ";
	cin>>b;
	obj.get(a,b);
	obj.SUM();
	getch();
}