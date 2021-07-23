#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int tests;
  cin >> tests;

  for (int _ = 0; _ < tests; _++) {
    llu n;
    cin >> n;

    if (n % 3 != 2)
      cout << (n + 2) / 3 << " " << n / 3 << endl;
    else
      cout << n / 3 << " " << (n + 2) / 3 << endl;
  }

  return 0;
}