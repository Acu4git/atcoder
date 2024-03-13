#include <iostream>
using namespace std;

int main() {
  string s, ans;
  cin >> s;

  for (auto c : s) {
    if (c == '.') {
      ans.clear();
    } else {
      ans += c;
    }
  }

  cout << ans << endl;
}