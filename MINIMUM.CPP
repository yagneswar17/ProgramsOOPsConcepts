#include<iostream.h>
#include<conio.h>
template<class minim>
void min(minim a[],int n)
{
  int i,j,minimum;
  minimum=a[0];
  for(i=0;i<n;i++)
  {
    if(minimum>a[i])
    {
      minimum=a[i];
    }
  }
  cout<<minimum;
}
void main()
{
  int a[6]={100,23,5,4,5,6};
  clrscr();
  cout<<"\n the minimum number in the array is :";
  min(a,6);
  getch();
}