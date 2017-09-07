#include<iostream>
using namespace std;
int main()
{
  int i=1,s=0,n;
  cout<<"Enter the number in binary";
  cin>>n;
  int m=0,p[40];
  p[0]=0;
  while(n)
  {
    if(n%10) m=10*m;
     else m=10*m+1;
    n/=10;
  }
  while(m)
  {
    p[i]=m%10;
    m/=10;
    i++;
  }
  i--;
  while(!(p[i]) 
  {
    p[i]=0;
    i--;
  }
  p[i]++;
  cout<<p;
  return 1;
}
