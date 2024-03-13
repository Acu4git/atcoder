#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long a[N], sum, start, ans;
  for (auto &x : a) cin >> x;

  sum = start = 0;
  for (int i = 0; i < N; i++) {
    sum += a[i];
    if (sum < 0) {
      start += abs(sum);
      sum = 0;
    }
  }
  if (sum > 0)
    ans = sum;
  else
    ans = 0;

  cout << ans << endl;
}