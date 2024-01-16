#include<iostream>
using namespace std;
#define MAXN 100
struct PhanSo{
    int tuso;
    int mauso;
};
void Nhap(PhanSo a[MAXN],int &n){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].tuso>>a[i].mauso;
    }
}
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void Xuat(PhanSo a[MAXN],int n){
    for(int i=0;i<n;i++){
        if(a[i].mauso==0) cout<<"Khong thoa yeu cau bai toan"<<endl; else
            if(a[i].tuso==0){
                cout<<0<<endl;
            }else 
            if(a[i].mauso/gcd(a[i].tuso,a[i].mauso)==1){
                cout<<a[i].tuso/gcd(a[i].tuso,a[i].mauso)<<endl;
            }else{
                cout<<a[i].tuso/gcd(a[i].tuso,a[i].mauso)<<"/"<<a[i].mauso/gcd(a[i].tuso,a[i].mauso)<<endl;
            }
        
    }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

