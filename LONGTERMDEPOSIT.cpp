/* Dynamic initialization of objects for long term fixed deposit system program */

#include<iostream>

using namespace std;

class fixed_deposit
{
	private:
    	float principle;
    	float time;
    	float rate;
    	float R_amount;	//Return Amount
    public:
		fixed_deposit(){}
    	fixed_deposit(float p,float t,float r=0.12);
    	fixed_deposit(float p,float t,int r);
    	void display();
};

fixed_deposit::fixed_deposit(float p,float t,float r)
{
    principle=p;
    time=t;
    rate=r;
    R_amount=principle;
    for(int i=0;i<t;i++)
        R_amount=R_amount*(1.0+r);
}
fixed_deposit::fixed_deposit(float p,float t,int r)
{
   principle=p;
   time=t;
   rate=r;
   R_amount=principle;
   for(int i=0;i<t;i++)
        R_amount=R_amount*(1.0+float(r)/100);
}

void fixed_deposit::display()
{
    cout<<"\n Principal amount = "<<principle;
    cout<<"\n Return amount = "<<R_amount<<endl;
}
int main()
{
    fixed_deposit FD1,FD2,FD3;
    float p;
    float t;
    float r;
    int R;
    cout<<"\n Deposit 1 : "<<endl;
    cout<<"\n Enter Principle amount : ";
	cin>>p;
	cout<<"\n Enter Time in years : ";
	cin>>t;
	cout<<"\n Enter Rate in percentage : ";
    cin>>R;
    FD1=fixed_deposit(p,t,R);
    cout<<"\n Deposit 2 : "<<endl;
    cout<<"\n Enter Principle amount : ";
	cin>>p;
	cout<<"\n Enter Time in years : ";
	cin>>t;
	cout<<"\n Enter Rate in decimals : ";
    cin>>r;
    FD2=fixed_deposit(p,t,r);
    cout<<"\n Deposit 3 : "<<endl;
    cout<<"\n Enter Principle amount : ";
	cin>>p;
	cout<<"\n Enter Time in years : ";
	cin>>t;
    FD3=fixed_deposit(p,t);
    cout<<"\n Deposit 1 : "<<endl;
    FD1.display();
    cout<<"\n Deposit 2 : "<<endl;
    FD2.display();
    cout<<"\n Deposit 3 : "<<endl;
    FD3.display();
    return 0;
}
