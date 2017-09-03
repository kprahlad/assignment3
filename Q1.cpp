#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float a,b;
  cin>>a>>b;
  if(a>b) cout<<a;
          else if(b>a) cout<<b;
                        else cout<<"Equal";
  return 1;
 }
