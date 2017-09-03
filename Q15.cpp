#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a,b,c;
  cin>>a>>b>>c;
  if(a+b>c&&a+c>b&&b+c>a) cout<<"Yup";
    else cout<<"Nope";
  return 1;
 }
