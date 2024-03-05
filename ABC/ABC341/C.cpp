#include <iostream>
#include <string>
using namespace std;

int main() {
  int H, W, N, cnt = 0;
  cin >> H >> W >> N;

  string T, S[H];
  cin >> T;
  for (auto &s : S) cin >> s;

  for (int i = 1; i <= H - 2; i++) {
    for (int j = 1; j <= W - 2; j++) {
      if (S[i][j] == '#') break;

      int x = j, y = i;
      bool flag = true;
      for (auto c : T) {
        if (c == 'L') {
          if (S[y][x - 1] == '.')
            x--;
          else {
            flag = false;
            break;
          }
        }
        if (c == 'R') {
          if (S[y][x + 1] == '.')
            x++;
          else {
            flag = false;
            break;
          }
        }
        if (c == 'U') {
          if (S[y - 1][x] == '.')
            y--;
          else {
            flag = false;
            break;
          }
        }
        if (c == 'D') {
          if (S[y + 1][x] == '.')
            y++;
          else {
            flag = false;
            break;
          }
        }
      }
      if (flag) cnt++;
    }
  }

  cout << cnt << endl;
}