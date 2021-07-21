#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;

  string vowels = "AOYEUIaoyeui";

  for (unsigned int i = 0; i < s.length(); i++) {
    if (vowels.find(s[i]) == string::npos) {
      cout << "." << (char)tolower(s[i]);
    }
  }

  return 0;
}
