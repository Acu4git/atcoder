#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const long long MOD = 100000000;

int main() {
  int N;
  cin >> N;
  vector<long long> a(N), sum_a(N + 1, 0);
  for (auto &x : a) cin >> x;

  long long ans = 0, cnt = 0;
  for (int i = 1; i <= N; i++) sum_a[i] = sum_a[i - 1] + a[i - 1];
  // cout << " (N - 1)ΣAi = " << (N - 1) * sum_a[N] << endl;
  for (int i = 0; i < N; i++)
    ans += a[i] * (N - i - 1) + sum_a[N] - sum_a[i + 1];
  // cout << "Ai(N - i) + sum[N] - sum[i] = " << ans << endl;
  // cout << "*************************************" << endl;

  sort(a.begin(), a.end());
  // for (auto x : a) cout << x << " ";
  // cout << endl << endl;

  for (int i = 0; i < N; i++) {
    auto it = lower_bound(a.begin() + i + 1, a.end(), MOD - a[i]);
    int idx_lower = distance(a.begin(), it);
    cnt += N - idx_lower;
  }

  ans -= MOD * cnt;
  cout << ans << endl;
}