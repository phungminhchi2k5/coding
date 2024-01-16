#include<iostream>

#include<iomanip>
using namespace std;

#include<math.h>
long double calculate(int n){
    if(n==1){  
    return 1;
    }
    return sqrt((n)+sqrt(n-1));
}

int main(){
    int n;
    cin >> n;
    cout << fixed<< setprecision(2)<<calculate(n);
}