#include<iostream>
using namespace std;
int main()
{
  int n=1,m,sum=0;
  cin>>m;
  while(n<=m)
  {
    int i=1,s=0;
    while(i<=n)
    {
     if(!(n%i)) s++;
      i++;
    }
    if(s==2) sum+=j;
   }
   cout<<sum;
  return 1;
}
