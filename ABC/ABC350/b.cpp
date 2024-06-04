#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q, ans = 0;
  cin >> N >> Q;

  int teeth[N + 1];
  for (auto &x : teeth) x = 1;

  while (Q--) {
    int t;
    cin >> t;

    if (teeth[t])
      teeth[t] = 0;
    else
      teeth[t] = 1;
  }

  for (int i = 1; i <= N; i++)
    if (teeth[i]) ans++;

  cout << ans << endl;
}