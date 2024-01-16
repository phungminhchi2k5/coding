#include <iostream>

using namespace std;

int main() {
  // Nhập số n
  int n;
  cin >> n;

  // Kiểm tra số n
  if (n < 100 || n > 9999) {
    // Không tồn tại số phù hợp
    cout << "Không tồn tại số phù hợp" << endl;
    return 0;
  }

  // Tìm số x
  int x = 0;
  int i = 9999;
  while (i >= 1000) {
    int a = i / 100;
    int b = i % 100;
    int c = a + b;
    int d = (i % 1000) + (i / 1000);
    if (c * 1000 + d == n) {
      x = i;
      break;
    }
    i--;
  }

  // In ra số cần đưa vào
  if (x == 0) {
    cout << "Không tồn tại số phù hợp" << endl;
  } else {
    cout << x << endl;
  }
  return 0;
}
