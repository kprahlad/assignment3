#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int s,flag=1;
  m>n? s=m:s=n;
  while(flag)
  {
    if(s%m==0&&s%n==0) {flag=0;}
    s++;
  }
  cout<<s-1;
  return 0;
}
