#include <iostream>
#include <cmath>
using namespace std;

int reverse(int N) {
    int soDaoNguoc = 0;
    
    while (N > 0) {
        int chuSoCuoi = N % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSoCuoi;
        N = N / 10;
    }
    
    return soDaoNguoc;
}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
