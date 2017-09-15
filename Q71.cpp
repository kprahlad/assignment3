#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
  char a[10];
  cout<<"Enter number in hexadecimal : ";
  cin>>a;
  int s=0,i=0;
  for(;i<strlen(a);i++)
  {
    if(a[i]>='A') a[i]-=7;
    cout<<a[i]-48<<" ";
    s+=(a[i]-48)*pow(16,strlen(a)-i-1);
  }
 cout<<s;
 return 0;
}
