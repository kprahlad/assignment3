#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=n%10;
  while(n>=10)
  {
    n/=10;
  }
  cout<<i+n;
  return 1;
}
