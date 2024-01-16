
#include <iostream>
#include <math.h>
using namespace std;
int count(int n){
    if(n<10){
        return 1;
    }
    return 1+count(n/10);
}
int fun(int n){
    if(count(n)%2==0){
        n
    }
}



int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}

