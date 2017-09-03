//ASSUMING THAT THE MIN. NUMBER OF NOTES ARE TO BE ISSUED
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a,s=0;
  cin>>a;
  s+=a%2000;
  a/=2000;
  s+=a%500;
  a/=500;
  s+=a%200;
  a/=200;
  s+=a%100;
  a/=100;
  s+=a%50;
  a/=50;
  s+=a%20;
  a/=20;
  s+=a%10;
  a/=10;
  s+=a%5;
  cout<<s;
  return 1;
 }
