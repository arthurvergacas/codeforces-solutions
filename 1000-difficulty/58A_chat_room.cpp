#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  string str;
  cin >> str;

  string target = "hello";
  int curr = 0;

  for (llu i = 0; i < str.length(); i++) {
    if (str[i] == target[curr]) {
      curr++;
      if (curr == 5) {
        cout << "YES\n";
        return 0;
      }
    }
  }

  cout << "NO\n";

  return 0;
}