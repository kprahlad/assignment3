#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long int a;
  cout<<"Enter number in binary : ";
  cin>>a;
  int s=0;
  int i=0;
  for(;a;a/=10,i++)
  {
    s+=a%10*pow(2,i);
  }
  i=0;
  while(s/int(pow(8,i))) i++;
  i--;
  int p=0;
  while(i>=0)
  {
    p=10*p+s/int(pow(8,i));
    s=s%int(pow(8,i));	
    i--;
  }
  cout<<"The number in octet is : "<<p;
  return 0;
}
