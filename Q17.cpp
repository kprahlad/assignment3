#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    float a, b, c, x1, x2, d, rp, ip;
    cout << "Enter coefficients a, b and c: ";
    cin>>a>>b>>c;
    d = b*b-4*a*c;
    if (d>=0) 
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "x1 = " << x1;
        cout << "x2 = " << x2;
    }

     else 
     {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-d)/(2*a);
        cout << "x1 = " << rp << "+" << ip << "i";
        cout << "x2 = " << rp << "-" << ip << "i";
     }
    return 1;
}
