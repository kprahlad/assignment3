#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cout<<"Last digit is "<<n%10;
  while(n>=10)
  {
    n/=10;
  }
  cout<<"First digit is "<<n;
  return 1;
}
