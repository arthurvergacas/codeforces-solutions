#include <iostream>

using namespace std;

int main() {
  int n;
  int ans;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> n;
      if (n == 1) {
        ans = abs((j + 1) - 3) + abs((i + 1) - 3);
        break;
      }
    }
  }

  cout << ans;

  return 0;
}