#include <iostream>
#include <map>
using namespace std;

int main() {
  string s;
  cin >> s;
  map<char, int> m;
  for (auto c : s) m[c]++;

  bool flag = true;
  for (int i = 1; i <= 100; i++) {
    int t = 0;
    for (auto [_, cnt] : m) {
      if (cnt == i) t++;
    }
    if (t != 0 && t != 2) flag = false;
  }

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}