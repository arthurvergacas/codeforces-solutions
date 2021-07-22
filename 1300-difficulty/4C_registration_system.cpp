#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  int numOfRequests;
  cin >> numOfRequests;

  unordered_map<string, int> requests;

  for (int i = 0; i < numOfRequests; i++) {
    string curr;
    cin >> curr;

    if (requests.find(curr) == requests.end()) {
      requests[curr] = 1;
      cout << "OK\n";
    } else {
      cout << curr << requests[curr] << "\n";
      requests[curr]++;
    }
  }

  return 0;
}