#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, ans;
  cin >> s;

  for (auto c : s) {
    ans += c;
    if (ans.size() >= 3 && ans.substr(ans.size() - 3, 3) == "ABC") {
      ans.erase(ans.size() - 3, ans.size());
    }
  }

  cout << ans << endl;
}