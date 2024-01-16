#include<iostream>
using namespace std;
#define MAXR 100
#define MAXC 100
void NhapMaTran(int a[MAXR][MAXC],int &n){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
bool isMaTranDonVi (int a[MAXR][MAXC],int n){
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j&&a[i][j]==1){
                count++;
                continue;
            }else if(a[i][j]==0){
                count1++;
            }
        }
    }
    if(count==n&&count1==((n*n)-n)){
        return true;
    }
    return false;
}
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}