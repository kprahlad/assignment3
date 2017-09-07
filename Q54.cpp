#include<iostream>
using namespace std;
int main()
{
  int i=1,s=0,n;
  cin>>n;
  for(int m=1;m<=n;m++)
  {
    i=1;
    s=0;
    while(i<m)
    {
      if(m%i==0) s+=i;
      i++;
    }
    if(s==m) cout<<m<<" is Perfect";
  }
  return 1;
}
