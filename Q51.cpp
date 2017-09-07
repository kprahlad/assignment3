#include<iostream>
using namespace std;
int main()
{
  int i,s=0,n;
  cin>>n;
  i=n;
  while(n)
  {
    s+=pow(n%10,3);
    n/=10;
  }
  if(s==i) cout<<"Armstrong";
  return 1;
}
