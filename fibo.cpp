#include<iostream>
using namespace std;
unsigned long long giaithuachan(unsigned long long n){
    unsigned long long result =1;
    for(unsigned long long i =2;i<=n;i+=2){
        result*=i;
    }
    return result;
}
unsigned long long giaithuale(unsigned long long n){
    unsigned long long result =1;
    for(unsigned long long i=1;i<=n;i+=2){
        result *=i;
    }
    return result;
}
int main(){
    unsigned long long n;
    cin >>n;
    if(n%2==0){
        cout << giaithuachan(n);
    }else{
        cout << giaithuale(n);
    }
}