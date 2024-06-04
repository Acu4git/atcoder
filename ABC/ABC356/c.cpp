#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // N: 鍵の総数
  // M: テスト回数
  // K: ドアを開けるのに最低限必要な鍵の個数
  int N, M, K;
  cin >> N >> M >> K;

  int ans = 0;
  vector<vector<int>> a(M);
  char r[M];
  for (int i = 0; i < M; i++) {
    int c;
    cin >> c;
    a[i].resize(c);
    for (int j = 0; j < c; j++) cin >> a[i][j];
    cin >> r[i];
  }

  // mask: 各ビットは鍵番号に対応しており，正しい鍵かダミー鍵かを0と1で表す
  for (int mask = 0; mask < (1 << N); mask++) {
    bool flag = true;

    for (int i = 0; i < M; i++) {
      int tmp = 0;

      for (auto n : a[i]) {
        if (mask & (1 << (n - 1))) {
          tmp++;
        }
      }

      if ((r[i] == 'o' && tmp < K) || (r[i] == 'x' && tmp >= K)) {
        flag = false;
        break;
      }
    }

    if (flag) ans++;
  }

  cout << ans << endl;
}