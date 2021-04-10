#include<iostream>
using namespace std;

template <class T>

int factorial(T n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int n;
    cout<<"\n Enter a positive integer : ";
    cin>>n;
    cout<<"\n Factorial of "<<n<<" = "<<factorial(n);
    return 0;
}
