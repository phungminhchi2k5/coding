#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int num, int divisor = 2) {
    if (num <= 1) {
        return false;
    }
    if (divisor * divisor > num) {
        return true;
    }
    if (num % divisor == 0) {
        return false;
    }
    return is_prime(num, divisor + 1);
}

int tong(int n, int current = 2, int count = 0, int sum = 0) {
    if (count == n) {
        return sum;
    }
    if (is_prime(current)) {
        return tong(n, current + 1, count + 1, sum + current);
    } else {
        return  tong(n, current + 1, count, sum);
    }
}
int main() {
  int n=0;
  cin >> n;
  while(n<=0 || n>50){
    cout << "Gia tri vua nhap la "<< n<<", khong hop le. Vui long nhap lai."<< endl;
    cin >> n;

  }
  cout << "Tong "<<n<<" so nguyen to dau tien la: "<<tong (n);
  return 0;
}