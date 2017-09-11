#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long int a;
  cout<<"Enter number in binary : ";
  cin>>a;
  int s=0;
  for(int i=0;a;a/=10,i++)
  {
    s+=a%10*pow(2,i);
  }
  cout<<"the number in decimal is : "<<s;
  return 0;
}
