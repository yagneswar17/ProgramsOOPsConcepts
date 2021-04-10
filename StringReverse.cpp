#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main() 
{
  
  char str[120];
  gets(str);
  cout<<strrev(str)<<endl;
  cout<<strcmp(str,strrev(str))<<endl;
  if(strcmp(str,strrev(str))==0)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
