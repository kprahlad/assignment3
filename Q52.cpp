#include<iostream>
using namespace std;
int main()
{
  int i=1,s=0,n;
  cin>>n;
  while(i<=n)
  {
    int m=i;
    s=0;
    while(m)
    {
      s+=pow(m%10,3);
      m/=10;
     }
    if(s==i) cout<<s<<" is Armstrong";
    i++;
   }
  return 1;
}
