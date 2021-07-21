#include <bits/stdc++.h>

using namespace std;

int main() {

  int nForces;
  cin >> nForces;

  int x = 0;
  int y = 0;
  int z = 0;

  for (int i = 0; i < nForces; i++) {
    int a, b, c;
    cin >> a >> b >> c;

    x += a;
    y += b;
    z += c;
  }

  if (x == 0 && y == 0 && z == 0)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}