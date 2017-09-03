#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e; //Assuming total marks is 100 and that grade is calculated per subject
  if(a>=90) cout<<"A";
    else if(a>=80) cout<<"B";
           else if(a>=70) cout<<"C";
                   else if(a>=60) cout<<"D";
                           else if(a>=40) cout<<"E";
                                  else cout<<"F";  
    if(b>=90) cout<<"A";
    else if(b>=80) cout<<"B";
           else if(b>=70) cout<<"C";
                   else if(b>=60) cout<<"D";
                           else if(b>=40) cout<<"E";
                                  else cout<<"F"; 
    if(c>=90) cout<<"A";
    else if(c>=80) cout<<"B";
           else if(c>=70) cout<<"C";
                   else if(c>=60) cout<<"D";
                           else if(c>=40) cout<<"E";
                                  else cout<<"F";
    if(d>=90) cout<<"A";
    else if(d>=80) cout<<"B";
           else if(d>=70) cout<<"C";
                   else if(d>=60) cout<<"D";
                           else if(d>=40) cout<<"E";
                                  else cout<<"F";
    if(e>=90) cout<<"A";
    else if(e>=80) cout<<"B";
           else if(e>=70) cout<<"C";
                   else if(e>=60) cout<<"D";
                           else if(e>=40) cout<<"E";
                                  else cout<<"F";  
     return 1;
  }
