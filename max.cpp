#include <iostream>
using namespace std;
int largest_input() {
    int num;
    cin >>num;

    if (num == 0) {
        return 0;
    }

    int maxRest = largest_input();

    if (num > maxRest) {
        return num;
    } else {
        return maxRest;
    }
}

int main() {
    int firstNum;
        cout <<largest_input();

    return 0;
}
