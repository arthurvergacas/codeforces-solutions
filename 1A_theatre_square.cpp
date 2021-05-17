#include <iostream>

using namespace std;

int main() {
  unsigned long long m, n, a;

  cin >> n >> m >> a;

  cout << ((n + a - 1) / a) * ((m + a - 1) / a) << "\n";

  return 0;
}