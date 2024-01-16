#include<iostream>
using namespace std;
void fun01(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    cout << result<<endl;
}
void fun02(int n){
    int result=0;
    while(n>0){
        result += n%10;
        n/=10;
    }
    cout << result<<endl;
}
void fun03(int n){
    int result=0;
    while(n>0){
        n/=10;
        result ++;
    }
    cout << result<<endl;
}
void fun04(int n){
   int  result =0;
    while (n>0){
        result =result *10+(n%10);
        n/=10;
    }
    cout << result;
}
int main(){
    int n;
    cin >>n;
    fun01(n);
    fun02(n);
    fun03(n);
    fun04(n);

}