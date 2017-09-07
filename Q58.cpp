#include<iostream>
using namespace std;
int main()
{
  int i=1,s=0,n;
  cout<<"Enter the number in binary";
  cin>>n;
  int m=0,p=0;
  while(n)
  {
    if(n%10) m=10*m;
     else m=10*m+1;
    n/=10;
  }
  while(m)
  {
    p=10*p+m%10;
    m/=10;
  }
  cout<<p;
  return 1;
}
