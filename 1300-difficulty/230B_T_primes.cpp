#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

bool isPrime(llu num) {

  if (num <= 1) return false;

  if (num <= 3) return true;

  if (num % 2 == 0 || num % 3 == 0) return false;

  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) return false;
  }
  return true;
}

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long double num;
    cin >> num;

    if (num == 1) {
      cout << "NO\n";
      continue;
    }

    llu sqrAns = sqrt(num);

    if (1LL * sqrAns * sqrAns == num) {
      if (isPrime(sqrAns)) {
        cout << "YES\n";
        continue;
      }
    }

    cout << "NO\n";
  }
  return 0;
}