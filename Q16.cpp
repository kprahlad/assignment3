#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a,b,c;
  cin>>a>>b>>c;
  if(a==b&&b==c) cout<< "Equilateral";
  else if(a+b>c&&a+c>b&&b+c>a)
         if(a==b||b==c||a==c) cout<<"Isoceles";
           else cout<<"Scalene";
  return 1;
}
  
