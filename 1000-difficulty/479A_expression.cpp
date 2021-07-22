#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int nums[3];

  for (int i = 0; i < 3; i++) {
    cin >> nums[i];
  }

  int max = 0;

  if ((nums[0] + nums[1]) * nums[2] > max) {
    max = (nums[0] + nums[1]) * nums[2];
  }

  if (nums[0] * (nums[1] + nums[2]) > max) {
    max = nums[0] * (nums[1] + nums[2]);
  }

  if (nums[0] * nums[1] * nums[2] > max) {
    max = nums[0] * (nums[1] * nums[2]);
  }

  if (nums[0] + nums[1] + nums[2] > max) {
    max = nums[0] + (nums[1] + nums[2]);
  }

  cout << max << endl;

  return 0;
}