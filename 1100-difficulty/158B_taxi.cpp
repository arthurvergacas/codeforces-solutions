#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int numGroups;
  cin >> numGroups;

  vector<int> groups(numGroups);

  for (int i = 0; i < numGroups; i++) {
    int a;
    cin >> a;
    groups.push_back(a);
  }

  sort(groups.begin(), groups.end(), greater<int>());

  int numTaxis = 0;

  for (int i = 0; i < numGroups; i++) {

    int sum = groups[i] + groups[numGroups - 1];
    if (sum <= 4) {
      numTaxis++;
      numGroups--;

      while (sum + groups[numGroups - 1] <= 4) {
        sum += groups[numGroups - 1];
        numGroups--;
      }
    } else {
      numTaxis++;
    }
  }

  cout << numTaxis << "\n";

  return 0;
}