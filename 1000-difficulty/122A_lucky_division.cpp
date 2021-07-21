#include <bits/stdc++.h>

using namespace std;

bool isLucky(int num) {
  string numStr = to_string(num);

  bool hasFour = false;
  bool hasSeven = false;
  bool hasAnother = false;

  for (int i = 0; i < numStr.length(); i++) {
    if (numStr[i] == '4') hasFour = true;
    if (numStr[i] == '7') hasSeven = true;
    if (numStr[i] != '4' && numStr[i] != '7') hasAnother = true;
  }

  return (hasFour || hasSeven) && !hasAnother;
}

int main() {

  int num;
  cin >> num;

  for (int i = 1; i < 1000; i++) {
    if (isLucky(i)) {
      if (num % i == 0) {
        cout << "YES\n";
        return 0;
      }
    }
  }

  cout << "NO\n";

  return 0;
}