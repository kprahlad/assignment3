
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1,s=0;
  while(i<=n)
  {
    if(!(n%i)) s++;
    i++;
  }
  if(s==2) cout<<"Prime";
  return 1;
}
