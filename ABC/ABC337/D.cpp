#include <iostream>
using namespace std;

string s[200009];
int x[200009], d[200009];

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  for (int i = 1; i <= H; i++) {
    cin >> s[i];
    s[i] = "#" + s[i];  // 1-indexedにするための便宜上の処理
  }

  int ans = 1e9;
  // 横方向のK列の検査
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      x[j] = x[j - 1], d[j] = d[j - 1];
      if (s[i][j] == 'x') x[j]++;
      if (s[i][j] == '.') d[j]++;
    }
    for (int j = 1; j <= W - K + 1; j++) {
      if (x[j + K - 1] - x[j - 1] == 0) ans = min(ans, d[j + K - 1] - d[j - 1]);
    }
  }
  // 縦方向のK行の検査
  for (int j = 1; j <= W; j++) {
    for (int i = 1; i <= H; i++) {
      x[i] = x[i - 1], d[i] = d[i - 1];
      if (s[i][j] == 'x') x[i]++;
      if (s[i][j] == '.') d[i]++;
    }
    for (int i = 1; i <= H - K + 1; i++) {
      if (x[i + K - 1] - x[i - 1] == 0) ans = min(ans, d[i + K - 1] - d[i - 1]);
    }
  }

  if (ans > K) ans = -1;
  cout << ans << endl;
}