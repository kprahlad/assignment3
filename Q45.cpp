#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int s,flag=1;
  m>n? s=n:s=m;
  while(flag)
  {
    if(m%s==0&&n%s==0) flag=0;
    s--;
  }
  cout<<s+1;
  return 1;
}
