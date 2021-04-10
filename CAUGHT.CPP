#include<iostream.h>
#include<conio.h>
void search(int a[],int n,int num)
{
  int i,count=0;
  try:
  {
    for(i=0;i<n;i++)
    {
      if(a[i]==num)
      {
	count++;
      }
    }
    if(count==1)
    {
      cout<<"The element is present in the array ."<<endl;
    }
    else
    {
     cout<<"Choice out of bounds"<<endl;
    }
  }
  catch:
  {
   cout<<"Caught an exception"<<endl;
  }
}
int main()
{
  clrscr();
  int b;
  int a[6]={1,4,78,90,5,7};
  cout<<"Enter the element to be searched :";
  cin>>b;
  search(a,6,b);
  getch();
  return 0;
}

