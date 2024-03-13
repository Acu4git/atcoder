#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long a[N], ans;  // start;
  for (auto &x : a) cin >> x;

  ans = 0;  // start = 0;
  for (int i = 0; i < N; i++) {
    ans += a[i];
    if (ans < 0) {
      // start += abs(ans);
      ans = 0;
    }
  }
  cout << ans << endl;
}