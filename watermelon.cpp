#include<iostream>
using namespace std;
int main()
{
 int d,r,n,result;
 result =0;
 cin >> d >> r >> n;
  //  cout << ((r*2)*n)+2*d;
  if(n==1){
    cout << r*2+2*d;
  }else{
  cout << (((r*2)-(d*2))*(n-2))+(2*(2*r+2*d));
  }
return 0;
 }
