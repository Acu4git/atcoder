#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, K, ans = 0;
  cin >> N >> K;
  vector<int> a(N);
  for (auto &x : a) cin >> x;

  int num = 0;
  for (int i = 0; i < N; i++) {
    if (num + a[i] > K) {
      num = 0;
      ans++;
    }
    num += a[i];
  }
  ans++;

  cout << ans << endl;
}