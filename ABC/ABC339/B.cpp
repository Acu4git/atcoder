#include <iostream>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  char g[H][W];
  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++) g[i][j] = '.';

  int x, y, m, m;
  x = y = m = 0;
  while (N--) {
    if (g[y][x] == '.') {
      g[y][x] = '#';
      m = (m + 1) % 4;
    } else {
      g[y][x] = '.';
      m = (m + 3) % 4;
    }
    x = (x + dx[m] + W) % W;
    y = (y + dy[m] + H) % H;
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) cout << g[i][j];
    cout << endl;
  }
}