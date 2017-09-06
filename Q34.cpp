#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=n%10,j=1,m=n;
  while(n>=10)
  {
    n/=10;
    j++;
  }
  m+=(i-n)*pow(10,j-1);
  m=m-i+n;
  n=m;
  cout<<n;
  return 1;
}
