#include<iostream>
#include<math.h>
using namespace std;
int giaithua(int n){
  float result=1.00;
  for(int i =1;i<=n;i++){
    result*=i;
  }
  return result;
}
int tong(int n){
  float result=0.00;
  for(int i=1;i<=n;i++){
    result += i;
  }
  return result;
}
int main() {
    float n,s1,s2,s3;
    s1=s2=s3=0.00;
    cin >> n;
    for(int i =1;i<=n;i++){
      s1+=pow(i,i);
      s2+=giaithua(i);
      s3+=(1/tong(i));
    }

    cout <<s1<<endl<<s2<<endl<<s3;
    cout << "hi";
    return 0;
}
