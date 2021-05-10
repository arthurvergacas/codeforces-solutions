#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;

  cin >> n;

  int a[n], b[n], c[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  int problems = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] + b[i] + c[i] >= 2) problems++;
  }

  cout << problems << endl;

  return 0;
}
