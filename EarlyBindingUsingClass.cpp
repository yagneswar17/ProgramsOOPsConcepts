#include<iostream>

using namespace std;

class Base 
{
   public:
   void display() 
   {
      cout<<" In Base class" <<endl;
   }
};

class Derived: public Base 
{
   public:
   void display() 
   {
      cout<<"In Derived class" << endl;
   }
};

int main() 
{
   Base *ptr = new Derived;
   ptr->display();
   return 0;
}
