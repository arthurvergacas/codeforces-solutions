#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  int n, k;

  cin >> n >> k;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int c = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] >= a[k - 1])
      c++;
    else
      break;
  }

  cout << c;

  return 0;
}
