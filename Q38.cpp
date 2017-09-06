#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  m=n;
  int s=0;
  while(n)
  {
    s=10*s+n%10;
    n/=10;
  }
  if(s==m) cout<<"Palindrome!";
   else cout<<"Nope";
  return 1;
}
