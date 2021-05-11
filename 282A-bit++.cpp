#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;

  int x = 0;

  for (int i = 0; i < n; i++) {
    string statement;
    cin >> statement;

    if (statement.find('+') != string::npos) {
      x++;
    } else {
      x--;
    }
  }

  cout << x;

  return 0;
}
