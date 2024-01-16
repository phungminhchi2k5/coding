#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int m, n, l, k;
     cin>>m>>n;
    float A[MAX][MAX];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
             cin >> A[i][j];
        }
    }

     cin>>l>>k;

    if (l != n) {
        return 1;
    }

    float B[MAX][MAX];
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < k; j++) {
             cin >> B[i][j];
        }
    }

    float result[MAX][MAX];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            result[i][j] = 0;
            for (int x = 0; x < n; x++) {
                result[i][j] += A[i][x] * B[x][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
             cout << result[i][j] << " ";
        }
         cout <<  endl;
    }

    return 0;
}
