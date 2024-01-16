#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int n,count;
    count =0;
    int a[100];
    cin >> n;
    for (int i =2;i<=n;i++){
        for(int j=2;j<sqrt(i);j++){
            if(i%j==0)
            count++;
        }
       if(count==0){
        a[i]=i;
       }
    }
    for(int i =2;i<n+2;i++){
        for(int j=3;j<n+2;j++){
            if(a[j]-a[j]==2){
                cout<<a[i]<<", "<<a[j]<<endl;
            }
        }
    }
    return 0;
}
