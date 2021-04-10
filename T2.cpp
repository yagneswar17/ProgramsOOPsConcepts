#include<iostream>

using namespace std;

int main ()
   {
       int find[5];
       int * p;
       p = find; 
*p = 1;
       p++;  *p = 2;
       p = &find[2];  *p = 3;
       p = find + 3;  *p = 4;
       p = find;  *(p + 4) = 5;
       for (int n = 0; n < 5; n++)
           cout << find[n] << ",";
       return 0;
   }  


