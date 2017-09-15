#include<iostream>
using namespace std;
int main()
{
  int a=0,b=0,c=1,n; //Assuming Fibo starts with 1,1
  cin>>n;
  int i=1;
  while(i<=n)
  {
     cout<<c<<" ";
     a=b;
     b=c;
     c=a+b;
  }
  return 1;
}
