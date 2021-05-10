#include <iostream>
#include <vector>

using namespace std;

int main() {
  int words;
  cin >> words;

  string line;
  vector<string> lines;

  for (int i = 0; i < words + 1; i++) {
    getline(cin, line);

    // if (line.empty()) {
    //   continue;
    // }
    lines.push_back(line);
  }

  for (int i = 1; i < words + 1; i++) {
    int len = lines[i].length();

    if (len > 10) {
      cout << lines[i][0] << len - 2 << lines[i][len - 1] << "\n";
    } else {
      cout << lines[i] << "\n";
    }
  }

  return 0;
}