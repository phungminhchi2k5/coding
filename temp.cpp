#include<iostream>
#include<cmath>
using namespace std;
int giaithua(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result *=i;
    }
    return result;
}
int main(){
    int n,x;
    double result;
    result =0;
    cin >> n>> x;
    for (int i=0;i<=2*n;i+=2){
        result+=pow(x,i)/giaithua(i);
    }
    cout << result;
    return 0;
}