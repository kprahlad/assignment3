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
  i=0;
  while(s/int(pow(2,i))) i++;
  i--;
  int p=0;
  while(i>=0)
  {
    p=10*p+s/int(pow(2,i));
    s=s%int(pow(2,i));	
    i--;
  }
  cout<<"The number in binary is : "<<p;
  return 0;
}
