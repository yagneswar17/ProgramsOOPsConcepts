/* Program implementing friend function. */
#include<iostream.h>
#include<conio.h>
class B;
class A
{
 private:
	int a;
 public:
	void get1();
	friend void oper(A,B);
};
class B
{
 private:
	int b;
 public:
	void get2();
	friend void oper(A,B);
};
void A::get1()
{
	cout<<"\n Enter a : ";
	cin>>a;
}
void B::get2()
{
	cout<<"\n Enter b : ";
	cin>>b;
}

void oper(A o1,B o2)
{
	cout<<"\n Sum        = "<<o1.a+o2.b;
	cout<<"\n Difference = "<<o1.a-o2.b;
	cout<<"\n Product    = "<<o1.a*o2.b;
}
void main()
{
	clrscr();
	A obj1;
	B obj2;
	obj1.get1();
	obj2.get2();
	oper(obj1,obj2);
	getch();
}