#include<iostream.h>
#include<conio.h>
template<class t>
class data
{
 public:
    data(t c,t b);
    data(t r1,t i1,t r2,t i2);
};
template<class t>
data<t>::data(t c,t b)
{
  cout<<"the sum is :"<<c+b<<endl;
}
template<class t>
data<t>::data(t r1,t i1,t r2,t i2)
{
  cout<<"the sum is :"<<r1+r2<<"+"<<i1+i2<<"i"<<endl;
}
int main()
{
 clrscr();
 int a,b,e,f,g,k;
 float c,d;
 cout<<"Enter the 2 integer numbers:"<<endl;
 cout<<"A :";cin>>a;
 cout<<"B :";cin>>b;
 cout<<"Enter the 2 float numbers:"<<endl;
 cout<<"C :";cin>>c;
 cout<<"D :";cin>>d;
 cout<<"Enter the 2 real numbers :"<<endl;
 cout<<"E(1st) :";cin>>e;
 cout<<"F(2nd) :";cin>>f;
 cout<<"Enter the 2 imaginary numbers :"<<endl;
 cout<<"G(1st) :";cin>>g;
 cout<<"H(2nd) :";cin>>k;
 cout<<endl;
 data<int>h(a,b);
 data<float>i(c,d);
 data<int>j(e,g,f,k);
 return 0;
}