#include <iostream>
using namespace std;

int charCount(string str, char c) {
  int res = 0;
  for (auto ch : str)
    if (ch == c) res++;
  return res;
}

int main() {
  int w, b;
  cin >> w >> b;
  string s;
  for (int i = 0; i < 20; i++) s += "wbwbwwbwbwbw";

  for (int i = 0; i < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      string sub = s.substr(i, j - i + 1);
      if (charCount(sub, 'w') == w && charCount(sub, 'b') == b) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}