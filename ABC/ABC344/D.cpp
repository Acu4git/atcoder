#include <iostream>
#include <string>
using namespace std;

string ss[108][19];
int main() {
  string s = "", t;
  cin >> t;

  int N, ans = 0;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    int a, maxlen = 0;
    cin >> a;

    string tmp = "";
    for (int j = 1; j <= a; j++) {
      cin >> ss[i][j];
      if (t.find(s + ss[i][j])) {
        if (ss[i][j].length() > maxlen) {
          tmp = ss[i][j];
          maxlen = ss[i][j].length();
        }
      }
    }
    s += tmp;
    if (!tmp.empty()) ans++;
  }

  if (s == t)
    cout << ans << endl;
  else
    cout << -1 << endl;
}