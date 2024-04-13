#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>
#include <string>
using namespace std;

bool judge(string s, string t) {
  bool flag = false;
  transform(t.begin(), t.end(), t.begin(), ::tolower);

  int j = 0;
  if (t[2] != 'x') {
    for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == t[j]) j++;
      if (j == 3) flag = true;
    }
  } else {
    for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == t[j]) j++;
      if (j == 2) flag = true;
    }
  }

  return flag;
}

int main() {
  string S, T;
  cin >> S >> T;
  if (judge(S, T))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}