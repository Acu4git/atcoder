#include <iostream>
#include <queue>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

struct Pos {
  int x, y;
};

int main() {
  // グリッドの初期化
  int H, W, N;
  cin >> H >> W;
  Pos s, t;
  char g[H + 2][W + 2];
  for (int i = 0; i <= H + 1; i++) g[i][0] = g[i][W + 1] = '#';
  for (int j = 0; j <= W + 1; j++) g[0][j] = g[H + 1][j] = '#';
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cin >> g[i][j];
      switch (g[i][j]) {
        case 'S':
          s.x = i;
          s.y = j;
          break;
        case 'T':
          t.x = i;
          t.y = j;
          break;
      }
    }
  }

  // 薬の位置の初期化
  cin >> N;
  int E[H + 1][W + 1];
  for (int i = 0; i <= H; i++) {
    for (int j = 0; j <= W; j++) E[i][j] = -1;
  }
  for (int i = 0; i < N; i++) {
    int r, c, e;
    cin >> r >> c >> e;
    E[r][c] = e;
  }

  // スタート
  int stamina = 0;
  bool visited[H + 1][W + 1];
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) visited[i][j] = false;
  }
  queue<Pos> que;
  que.push(s);
  visited[s.x][s.y] = true;

  bool flag = false;
  while (!que.empty()) {
    Pos curr = que.front();
    que.pop();
    if (curr.x == t.x && curr.y == t.y) {
      flag = true;
      break;
    }
    if (E[curr.x][curr.y] > stamina) {
      stamina = E[curr.x][curr.y];
    }

    for (int i = 0; i < 4; i++) {
      Pos next;
      next.x = curr.x + dx[i];
      next.y = curr.y + dy[i];
      if (stamina > 0 && g[next.x][next.y] != '#' && !visited[next.x][next.y]) {
        visited[next.x][next.y] = true;
        que.push(next);
      }
    }
    stamina--;
  }

  cout << (flag ? "Yes" : "No") << endl;
}