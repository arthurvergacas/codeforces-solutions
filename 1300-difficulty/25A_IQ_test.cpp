#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int n;
  cin >> n;

  int nums[100];

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  for (int i = 1; i < n - 1; i++) {
    bool left = nums[i - 1] % 2 == 0;
    bool middle = nums[i] % 2 == 0;
    bool right = nums[i + 1] % 2 == 0;

    if (left != middle && left != right) {
      cout << i << endl;
      return 0;
    }

    if (middle != left && middle != right) {
      cout << i + 1 << endl;
      return 0;
    }

    if (right != middle && right != left) {
      cout << i + 2 << endl;
      return 0;
    }
  }

  return 0;
}