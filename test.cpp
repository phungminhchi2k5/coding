/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#include <cmath>
using namespace std;

long sum_common_prime(int m, int n){
int G = abs (m-n), r = 0;
for (int i=2; i*i <= G; i++)
if (G%i==0){
if (m%i == 0 && n%i == 0) r+=i; while (G%i ==0) G/=i;
}
if (G > 1 && m%G == 0 && n%G == 0) r+=G; 
if (r >0) return r; 
return -1;
}


int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}