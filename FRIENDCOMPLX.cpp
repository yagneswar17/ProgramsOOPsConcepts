#include<iostream>

using namespace std;

class Cmplx
{
		int real,imagin;
	public :
	void get()
	{
		cout<<"\n ENTER THE REAL PART : ";
		cin>>real;
		cout<<"\n ENTER THE IMAGINARY PART : ";
		cin>>imagin;
	}
	friend void sum(Cmplx,Cmplx);
};

void sum(Cmplx c1,Cmplx c2)
{
	cout<<"\n\t\t RESULT : ";
	cout<<"\n\n\t["<<c1.real<<" + "<<c1.imagin<<"i";
	cout<<" ] + [ "<<c2.real<<" + "<<c2.imagin<<"i";
	cout<<" ] = "<<c1.real+c2.real<<" + "<<c1.imagin+c2.imagin<<"i";
}

int main()
{
	Cmplx op1,op2;
	cout<<"\n\t ADDITION OF TWO COMPLEX NUMBERS USING FRIEND FUNCTION"<<endl;
	cout<<"\n Enter OPERAND 1";
	op1.get();
	cout<<"\n Enter OPERAND 2";
	op2.get();
	sum(op1,op2);
	return 0;
}
