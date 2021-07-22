#include <bits/stdc++.h>

#define llu long long int

using namespace std;

int main() {

  int numLanterns;
  llu lenStreet;
  cin >> numLanterns >> lenStreet;

  vector<llu> lanterns(numLanterns);
  for (int i = 0; i < numLanterns; i++) {
    cin >> lanterns[i];
  }

  sort(lanterns.begin(), lanterns.end());

  long double d = lanterns[0];

  for (int i = 1; i < numLanterns; i++) {
    if (lanterns[i] - d > lanterns[i - 1] + d) {
      d = abs((lanterns[i - 1] - lanterns[i]) / 2.0);
    }
  }

  if (lenStreet - lanterns[numLanterns - 1] > d) {
    d = lenStreet - lanterns[numLanterns - 1];
  }

  cout << fixed << setprecision(9) << d << endl;

  return 0;
}