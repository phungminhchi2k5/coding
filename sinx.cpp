#include<iostream>
#include<iomanip>
using namespace std;

int pow(int x,int y){
    int result=x;
    for(int i=1;i<y;i++){
        result*=x;
    }
    return result;
}
int factor(int n){
    int result =1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}
int main(){
    float x=0.0000,result=0.0000;
    int n;
    cin >>n;
    for(int i=0;i<=n;i++){
        result +=pow(-1,i)*((pow(x,2*i+1))/(factor(2*i+1)));
    }
    cout <<fixed<< setprecision(4)<<     result;
    return 0;
}