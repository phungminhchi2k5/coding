#include<iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()

{
    int x;
    cin >> x;
    if(x>=1 && x<=30){
        cout << Fibo(x);
    }else{
        cout <<"So "<<x<<" khong nam trong khoang [1,30].";
    }

    return 0;
}
int Fibo(int n){
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return Fibo(n-1) + Fibo(n-2);
    }
}
