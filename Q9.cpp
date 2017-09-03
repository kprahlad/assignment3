#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  char a;
  cin>>a;
  if((a>='a'&&a<='z')||(a>='A'&&a<='Z') cout<<"Alphabet";
     else if(a>='1'&&a<='9') cout<<"Digit";
            else cout<<"Special";
  return 1;
 
