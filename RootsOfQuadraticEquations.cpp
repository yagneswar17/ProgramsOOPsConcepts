#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float a,b,c,x1,x2,discriminant,realPart,imaginaryPart;
    cout<<"\n Enter coefficients a, b and c : ";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    
    if (discriminant > 0) 
    {
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"\n Roots are real and different.";
        cout<<"\n x1 = " << x1;
        cout<<"\t x2 = " << x2;
    }
    
    else if (discriminant == 0)
    {
        cout<<"\n Roots are real and same.";
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout<<"\n x1 = x2 = "<<x1<<endl;
    }

    else 
    {
        realPart=-b/(2*a);
        imaginaryPart=sqrt(-discriminant)/(2*a);
        cout<<"\n Roots are complex and different.";
        cout<<"\n x1 = "<<realPart<< "+"<<imaginaryPart<<"i";
        cout<<"\n x2 = "<<realPart<< "-"<<imaginaryPart<<"i";
    }

    return 0;
}
