/* Program illustrating Access Specifiers.(private,protected and public). */
#include<iostream.h>
#include<conio.h>

class Access
{
 private:
	int a;
	void get1();
 protected:
	int b;
	void get2();
 public:
	int c;
	void get3();
	void SUM();
};
void Access::get1()
{
	cout<<"\n Enter a : ";
	cin>>a;
}
void Access::get2()
{
	cout<<"\n Enter b : ";
	cin>>b;
}
void Access::get3()
{
	get1();		   // Private members   Accessable by member function
	get2();              // Protected members Accessable by member function
	cout<<"\n Enter c : ";
	cin>>c;
}
void Access::SUM()
{
	cout<<"\n Sum = "<<a+b+c;
}
void main()
{
	clrscr();
	Access obj;
   //	obj.get1();     Not Accessable (Private declaration)
   //	obj.get2();     Not Accessable (Protected declaration)
	obj.get3();     //  Accessable (Public declaration)
	obj.SUM();
	getch();
}