#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,c,n; //Assuming Fibo starts with 0,1
  cin>>n;
  int i=1;
  while(i<=n)
  {
     c=a+b;
     a=b;
     b=c;
     cout<<c<<" ";
  }
  return 1;
}
