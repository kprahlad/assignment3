#include<iostream>
using namespace std;
int main()
{
  int i,s=0,n,m=0;
  cin>>n;
  i=n;
  while(i)
  {
      m++;
      i/=10;
  }
  i=n;
  while(n)
  {
    s+=pow(n%10,m);
    n/=10;
  }
  if(s==i) cout<<"Armstrong";
  return 1;
}
