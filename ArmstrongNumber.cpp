#include <cmath>
#include <iostream>

using namespace std;

int main() 
{
   int num,temp,rem,power,n=0,result=0;
   cout<<"\n Enter an integer : ";
   cin>>num;
   temp=num;
   while (temp!=0) 
   {
      temp/=10;
      ++n;
   }
   temp=num;
   while (temp!= 0) 
   {
      rem=temp%10;
      power=round(pow(rem, n)); // round() returns the equivalent int
      result+=power;
      temp/=10;
   }
   cout<<endl;
   if(result==num)
      cout<<num<<" is an Armstrong number.";
   else
      cout<<num<<" is not an Armstrong number.";
   return 0;
}
