#include <math.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// O(n²)
void sort(vector<int>& a) {
  for (long unsigned int i = 0; i < a.size(); i++) {
    for (long unsigned int j = 0; j < a.size() - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

// O(n²)
vector<string> split(string const& str, char separator) {
  vector<string> newVector;

  if (str.find(separator) == string::npos) {
    newVector.push_back(str);
  } else {
    int begin = 0;

    for (long unsigned int i = 0; i < str.length(); i++) {
      if (str[i] == separator) {
        string separated;

        int end = str.length() - 1;

        for (long unsigned int j = begin; j < str.length(); j++) {
          if (str[j] == separator) {
            end = j;
            break;
          }
        }

        separated = str.substr(begin, end - begin);
        begin = i + 1;
        newVector.push_back(separated);
      }
    }
    newVector.push_back(str.substr(begin, str.length() - 1));
  }
  return newVector;
}

// O(n * m), onde n = elementos a serem convertidos, m = número de dígitos de cada número
vector<int> toIntVector(vector<string>& a) {
  vector<int> newVector;

  for (long unsigned int i = 0; i < a.size(); i++) {
    int sum = 0;

    for (long int j = a[i].length() - 1; j >= 0; j--) {
      sum += ((int)a[i][j] - (int)'0') * pow(10, a[i].length() - j - 1);
    }

    newVector.push_back(sum);
  }

  return newVector;
}

// O(n)
void printVector(vector<int>& a) {
  for (long unsigned int i = 0; i < a.size(); i++) {
    cout << a[i] << ", ";
  }
  cout << endl;
}

// O(n)
void printVector(vector<string>& a) {
  for (long unsigned int i = 0; i < a.size(); i++) {
    cout << a[i] << ", ";
  }
  cout << endl;
}

int main() {
  string sum;
  vector<int> nums;

  getline(cin, sum);

  vector<string> separated = split(sum, '+');

  nums = toIntVector(separated);

  sort(nums);

  for (long unsigned int i = 0; i < nums.size(); i++) {
    cout << nums[i];

    if (i + 1 != nums.size()) {
      cout << "+";
    }
  }

  return 0;
}