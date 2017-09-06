#include<iostream>
using namespace std;
int main()
{
  int s=0,n;
  cin>>n;
  while(n)
  {
    s++;
    n/=10;
  }
  return 1;
}
