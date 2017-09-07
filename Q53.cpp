#include<iostream>
using namespace std;
int main()
{
  int i=1,s=0,n;
  cin>>n;
  while(i<n)
  {
    if(n%i==0) s+=i;
    i++;
  }
  if(s==n) cout<<"Perfect";
  return 1;
}
