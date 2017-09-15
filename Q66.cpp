#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long int s;
  cout<<"Enter number in decimal : ";
  cin>>s;
  int i=0;
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
