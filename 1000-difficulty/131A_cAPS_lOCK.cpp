#include <bits/stdc++.h>

#define llu long unsigned int

using namespace std;

int main() {

  string word;
  cin >> word;

  bool allFrom1 = true;
  for (llu i = 1; i < word.length(); i++) {
    if (islower(word[i])) {
      allFrom1 = false;
      break;
    }
  }

  if (allFrom1) {
    for (llu i = 0; i < word.length(); i++) {
      if (islower(word[i])) {
        word[i] = toupper(word[i]);
      } else {
        word[i] = tolower(word[i]);
      }
    }
  }

  cout << word << endl;

  return 0;
}