#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(!(n%i))
     { 
          int j=1,s=0;
          while(j<=i)
          {
              if(!(n%j)) s++;
              j++;
          }
          if(s==2) cout<<i;
     }
  }
  return 1;
}
