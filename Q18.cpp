#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a,b;
  cout<<"Total cost"
  cin>>a;
  cout<<"Total sale";
  cin>>b;
  if(a>b) cout<<a-b<<" is profit";
    else if(a<b) cout<<b-a<< "is loss";
           else cout<<" Broke even";
   return 1;
 }
