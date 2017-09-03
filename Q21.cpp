#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a,s=0
  cin>>a;
  if(a<=50) s=0.5*a;
  else
  {
    s=50
    if(a<=150)s+=0.75*(a-100);
      else 
      {
      s+=75;
      if(a<=250)s+=1.2*(a-150);
       else 
        s+=120+1.5*(a-25);
    }
    s+=0.2*s;
    return 1;
   }
