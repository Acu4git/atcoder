#include <algorithm>
#include <iostream>
using namespace std;

const long long INF = INT64_MAX;

int main() {
  int N;
  cin >> N;

  long long Q[N], A[N], B[N], ans;
  for (auto &q : Q) cin >> q;
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  ans = 0;
  for (int x = 0; x <= 1000000; x++) {
    long long y = INF;
    bool flag = true;  // 料理Aがx人分作れるかどうか
    for (int i = 0; i < N; i++) {
      if (Q[i] - A[i] * x < 0) {
        flag = false;
        break;
      } else if (B[i] > 0) {
        y = min(y, (Q[i] - A[i] * x) / B[i]);
      }
    }
    if (flag) ans = max(ans, x + y);
  }

  cout << ans << endl;
}