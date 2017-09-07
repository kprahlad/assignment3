#include<iostream>
using namespace std;
int main()
{
  int i=1,s=0,n;
  cin>>n;
  int m=n;
  while(n)
  {
    int t=n%10,fact=1;
    while(t)
     fact*=t--;
    s+=fact;
    n/=10;
  }
  if(s==m) cout<<"Strong";
  return 1;
}
