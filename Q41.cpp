#include<iostream>
using namespace std;
int main()
{
  int i=0;
  while(i<256) //Assuming EOF doesn't mess up
  {
    cout<<i<<char(i);
  }
  return 1;
}
