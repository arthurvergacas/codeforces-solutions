#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string str1;
  string str2;
  cin >> str1 >> str2;

  int status = 0;

  for (unsigned int i = 0; i < str1.length(); i++) {
    if (tolower(str1[i]) > tolower(str2[i])) {
      status = 1;
      break;
    } else if (tolower(str1[i]) < tolower(str2[i])) {
      status = -1;
      break;
    }
    status = 0;
  }

  cout << status;

  return 0;
}
