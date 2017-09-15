#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long int s;
  cout<<"Enter number in decimal : ";
  cin>>s;
  int i=0;
  while(s/int(pow(16,i))) i++;
  i--;
  char p[10]; int l=0;
  while(i>=0)
  {
    p[l]=s/int(pow(16,i))+48;
    s=s%int(pow(16,i));	
    i--;l++;
  }
  i=0;
  cout<<"The number in Hexadecimal is: ";
while(i<l)
{
  if(p[i]<=57) cout<<p[i];
   else cout<<char(7+p[i]);i++;
}
 return 0;
}
