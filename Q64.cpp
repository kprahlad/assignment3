#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long int a;
  cout<<"Enter number in octal : ";
  cin>>a;
  int s=0;
  int i=0;
  for(;a;a/=10,i++)
  {
    s+=a%10*pow(8,i);
  }
  cout<<"The number in decimal is : "<<s;
  return 0;
}
