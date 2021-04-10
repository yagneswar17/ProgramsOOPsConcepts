#include<iostream>

#define PI 3.14

using namespace std;

class Area		// Abstract Class
{
	protected:
		int l,b,h,opt;
		float area;
	public:
   		virtual void result() = 0;	//Pure Virtual Function
};
class Calculate: public Area
{
	public:
		void get();
		void CalArea(); 
   		void result() 
		{
      		cout<<"\n Area = "<<area;
   		}
};

void Calculate::get()
{
	cout<<"\n Enter choice : (1=Triangle, 2=Square, 3=Rectangle, 4=Circle) : ";
	cin>>opt;
}
void Calculate::CalArea()
{
   		{
      		switch(opt)
      		{
      			case 1:
      				cout<<"\n Enter Base : ";
      				cin>>b;
      				cout<<"\n Enter Height : ";
      				cin>>h;
				  	area=0.5*b*h;
				 	break;
				case 2:
					cout<<"\n Enter Length : ";
      				cin>>l;
					area=l*l;
					break;
				case 3:
					cout<<"\n Enter Length : ";
      				cin>>l;
      				cout<<"\n Enter Width : ";
      				cin>>b;
					area=l*b;
					break;
				case 4:
					cout<<"\n Enter Radius : ";
      				cin>>l;
					area=PI*l*l;
					break;
				default:
					cout<<"\n Invalid Choice!!!";	
			}
   		}
}
int main()
{
   Calculate obj;
   obj.get();
   obj.CalArea();
   obj.result();
   return 0;
}
