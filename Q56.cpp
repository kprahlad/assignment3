#include<iostream>
using namespace std;
int main()
{
  int s=0,n;
  cin>>n;
  for(int j=1;j<=n;j++)
  {
    int m=j;
    s=0;
    while(m)
    {
      int t=m%10,fact=1;
      while(t)
      fact*=t--;
      s+=fact;
      m/=10;
    }
    if(s==j) cout<<j<<" is Strong";
  }
  return 1;
}
