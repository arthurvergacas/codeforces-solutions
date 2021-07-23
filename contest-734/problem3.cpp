#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int tests;
  cin >> tests;

  for (int _ = 0; _ < tests; _++) {

    llu n, k;
    cin >> n >> k;

    llu colors[(llu)2e5 + 5];

    for (int i = 0; i < n; i++) {
      cin >> colors[i];
    }

    unordered_map<llu, llu> colorsMap;
    for (llu i = 0; i < n; i++) {
      if (colorsMap.find(colors[i]) == colorsMap.end()) {
        colorsMap[colors[i]] = k;
      }
    }

    vector<llu> useOfColors(k + 1, 0);
    llu maxUseOfColors = n / k;

    for (llu i = 0; i < n; i++) {

      while (useOfColors[colorsMap[colors[i]]] >= maxUseOfColors) {

        colorsMap[colors[i]]--;
        if (colorsMap[colors[i]] < 0) {
          colorsMap[colors[i]] = 0;
          break;
        }
      }

      cout << colorsMap[colors[i]] << " ";
      useOfColors[colorsMap[colors[i]]]++;
      colorsMap[colors[i]]--;

      if (colorsMap[colors[i]] < 0) {
        colorsMap[colors[i]] = 0;
      }
    }

    cout << endl;
  }

  return 0;
}