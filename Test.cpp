#include<iostream>

using namespace std;

   int main()
   {
      int i;
       char *find[] = {"C", "C++", "Java", "VBA"};
       char *(*ptr)[4] = &find;
       cout << ++(*ptr)[2];
       return 0;
   } 


