#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
  char a;
  cin>>a;
  if(toupper(a)=='A'||toupper(a)=='E'||toupper(a)=='I'||toupper(a)=='O'||toupper(a)=='U') cout<<"Vowel";
   else cout<<"Nope";
  return 1;
 }
