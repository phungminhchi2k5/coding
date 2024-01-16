#include<iostream>
using namespace std;

int reverse(int n) {
    static int reversed = 0; 
    if (n == 0) {
        int result = reversed;
        reversed = 0; 
        return result;
    } else {
        reversed = reversed * 10 + n % 10;
        return reverse(n / 10);
    }
}

int main(){
    int n;
    cin >> n;
    cout << reverse(n);
}