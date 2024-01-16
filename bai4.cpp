#include<iostream>
int input(int &a){
    std::cin >>a;
}

int TongChuSo(int n) {
  int sum = 0;
  while (n) {
    sum += (n & 1);
    
    n >>= 1; 
  }

  return sum;
}
    int main() {
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
/*
int main(){
    int n;
    cin >> n;
    int result =0;
    for(int i =1;i<=pow(10,count(n));i*=10){
        result+=n%10;
        n/=i;
    }
    cout << result;
}
*/