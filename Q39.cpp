#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int m=n;
  int s=0;
  while(s<10)
  {
    int i=0;
    n=m;
    while(n)
    {
     if(s==n%10) i++;
     n/=10;
    }
    if(i!=0) cout<<s<<" Appears "<<i<<" times in "<<m;
  }
  cout<<s;
  return 1;
}
