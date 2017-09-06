#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int s=1;
  while(n)
  {
    s*=n;
    n--;
  }
  cout<<s;
  return 1;
}
