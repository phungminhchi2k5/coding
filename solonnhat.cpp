#include <iostream>
using namespace std;

int timChuSoLonNhat(int X, int maxDigit) {
    if (X == 0) {
        return maxDigit;
    }
    
    int digit = X % 10;
    if (digit > maxDigit) {
        maxDigit = digit;
    }
    
    return timChuSoLonNhat(X / 10, maxDigit);
}

int main() {
    int X;
    cin >> X;

    cout<<X<<" - "<<timChuSoLonNhat(X,-1);
    return 0;
}
