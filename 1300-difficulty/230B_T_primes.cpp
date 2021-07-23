#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    llu num;
    cin >> num;

    llu divisors = 0;

    for (int j = 1; j <= sqrtf64(num); j++) {
      if (num % j == 0) divisors++;

      if (divisors > 3) {
        break;
      }
    }

    if (divisors == 3) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}