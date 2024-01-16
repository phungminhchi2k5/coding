#include <iostream>
using namespace std;
#define MAX 100
void input(float a[][100], int m, int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++) cin >> a[i][j];
	}
}
bool Frobenius(float a[][100], int m, int n){
    int col = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (a[i][j] != 1) {
                    return false;
                }
            }
            else if (i > j) {
                if (a[i][j] != 0) {
                    if (col != -1 && col != j) {
                        return false;
                    }
                    else {
                        col = j;
                    }
                }
            }
            else {
                if (a[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}
int main(){
	float a[MAX][MAX];
	int m, n;
	cin >> m >> n;
	input(a,m,n);
	if(Frobenius(a,m,n)) cout <<"Yes";
	else cout <<"No";
    return 0;
}