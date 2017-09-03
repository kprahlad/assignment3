#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a;
  cin>>a;
  if(a%4==0)
  {
     if(a%100==0&&a%400) cout<<"Yup";
        else cout<<"No";
     if(a%100) cout<<"Yup";
   }
    else cout<<"Nope";
   return 1;
  }
