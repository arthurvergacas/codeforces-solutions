#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int tests;
  cin >> tests;

  for (int _ = 0; _ < tests; _++) {

    string str;
    cin >> str;

    set<char> setStr;
    for (llu i = 0; i < str.size(); i++) {
      setStr.insert(str[i]);
    }

    unordered_map<char, int> mapStr;
    for (llu i = 0; i < str.size(); i++) {
      if (mapStr.find(str[i]) == mapStr.end()) {
        mapStr[str[i]] = 1;
      } else {
        mapStr[str[i]]++;
      }
    }

    int uniques = 0;
    int twoOrMore = 0;

    for (auto c : setStr) {
      if (mapStr[c] == 1) {
        uniques++;
      } else {
        twoOrMore++;
      }
    }

    int red = uniques / 2 + twoOrMore;

    cout << red << endl;
  }

  return 0;
}