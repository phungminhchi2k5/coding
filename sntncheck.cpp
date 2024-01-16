#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int& n);
int SoPhanTuChuaY(int a[], int n, int y);
bool snt(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void NhapmangSNT(int a[], int& n) {
    cin >> n;
    int count = 0, current = 2;
    while (count < n) { 
        if (snt(current)) {
            a[count] = current;
            count++;
        }
        current++;
    }
}

int SoPhanTuChuaY(int a[], int n, int y) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = a[i];
        while (num > 0) {
            if (num % 10 == y) {
                count++;
                break;
            }
            num /= 10;
        }
    }
    return count;
}

int main() {
    int a[MAX], n, y;
    cin >> y;
    NhapmangSNT(a, n);
    cout << SoPhanTuChuaY(a, n, y) << endl;
    return 0;
}
