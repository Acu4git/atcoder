#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s[0] != '<' || s[s.length() - 1] != '>') {
    cout << "No" << endl;
  } else {
    bool flag = true;
    for (int i = 1; i < s.length() - 1; i++)
      if (s[i] != '=') flag = false;
    cout << (flag ? "Yes" : "No") << endl;
  }
}