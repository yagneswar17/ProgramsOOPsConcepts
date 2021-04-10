#include <iostream>

using namespace std;

class simple_interest
{
	private:
   		float principle , time, rate ,interest;
   public:
      simple_interest (float a, float b, float c) 
	  {
         principle = a;
         time =b;
         rate = c;
      }
      void display ( ) 
	  {
         interest =(principle* rate* time)/100;
         cout<<"\n Simple Interest = "<<interest ;
      }
};

int main()
{
   float p,r,t;
   cout<<"\n Enter Principle amount : ";
   cin>>p;
   cout<<"\n Enter Time : ";
   cin>>t;
   cout<<"\n Enter Rate : ";
   cin>>r;  
   simple_interest obj(p,r,t);	//dynamic initialization
   obj.display();
   return 0;
}
