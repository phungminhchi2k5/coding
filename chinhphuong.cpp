#include <iostream>
#include <cmath>
using namespace std;

int Chinhphuong(int n)
{
    int count = 0;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            double sqrt_ij = sqrt(i * j);
            
            if (sqrt_ij == floor(sqrt_ij))
            {
                count++;
                
                if (i != j) 
                    count++;
            }
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;

    cout << Chinhphuong(N);

    return 0;
}
