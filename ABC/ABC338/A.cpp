#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool flag = true;
  for (int i = 0; i < s.length(); i++) {
    if (i == 0) {
      if ('a' <= s[0] && s[0] <= 'z') {
        flag = false;
        break;
      }
    } else {
      if ('A' <= s[i] && s[i] <= 'Z') {
        flag = false;
        break;
      }
    }
  }

  cout << (flag ? "Yes" : "No") << endl;
}