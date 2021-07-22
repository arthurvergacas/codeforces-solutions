#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
  return (a.first < b.first);
}

int main() {

  int strength, numOfDragons;
  cin >> strength >> numOfDragons;

  vector<pair<int, int> > dragons;

  for (int i = 0; i < numOfDragons; i++) {
    int x, y;
    cin >> x >> y;

    dragons.push_back(make_pair(x, y));
  }

  sort(dragons.begin(), dragons.end(), cmp);

  for (int i = 0; i < numOfDragons; i++) {
    if (strength <= dragons[i].first) {
      cout << "NO\n";
      return 0;
    }

    strength += dragons[i].second;
  }

  cout << "YES\n";

  return 0;
}