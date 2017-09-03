#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float b,f;
  cin>>b;
  if(b<=10000) f=b+b;
    else if(b<=20000) f=b+1.15*b;
            else f=b+1.25*b;
   return 1;
  }
