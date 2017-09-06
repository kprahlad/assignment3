#include<iostream>
using namespace std;
int main()
{
  int i=1,n;
  cin>>n;
  while(i<=100) //Multiplication table till 100
  {
    cout<<i<<"X"<<n<<"="<<i*n<<endl;
    i++;
  }
  return 1;
}
