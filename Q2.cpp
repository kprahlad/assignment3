#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a,b,c;
  cin>>a>>b>>c;
  if(a>b)
   if(b>c) cout<<b;
           else cout<<c;
  else if(c>a) cout<<c;
                else cout<<a;
  return 1;
 }
