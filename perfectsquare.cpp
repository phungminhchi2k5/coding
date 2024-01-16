#include<iostream>
using namespace std;

int Chinhphuong(int n){
long long squarefree[n + 1];
for (int k = 0; k <= n; k++){
squarefree[k] = k;
}
long long res = 0;
for(int i = 1; i <= n; ++i){
    if (squarefree[i]){
        for (int j = 1; i *j* j <= n; ++j){
            squarefree[i*j*j] = 0; res += j- 1;
        }
    }
}
return res * 2 + n;
}


int main()
{
    int N;
    cin >> N;
    cout << Chinhphuong(N);
    return 0;
}