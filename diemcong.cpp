#include <iostream>
using namespace std;

int main() {
    int height;

    // Nhập chiều cao từ người dùng
    cout << "Nhập chiều cao của cây thông: ";
    cin >> height;

    if (height < 3) {
        cout << "No Tree" << endl;
    } else {
        // In hình cây thông
        int soDot = 1;
        for (int i = 0; i < height; i++) {
            // In khoảng trắng
            for (int j = 0; j < height - i - 1; j++) {
                cout << " ";
            }

            // In dấu '*'
            for (int k = 0; k < soDot; k++) {
                cout << "*";
            }

            cout << endl;

            // Tăng số đốt '*' cho lần sau
            soDot += 2;
        }

        // In thân cây
        for (int i = 0; i < height - 1; i++) {
            cout << " ";
        }
        cout << "|" << endl;
    }

    return 0;
}
