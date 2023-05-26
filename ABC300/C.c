#include <stdio.h>
#include <stdlib.h>

int min_hw(int h, int w) { return h < w ? h : w; }

int main() {
  int d, i, j, N, H, W, *s;
  scanf("%d%d", &H, &W);
  N = min_hw(H, W);
  s = (int*)malloc(sizeof(int) * (N + 1));
  for (i = 1; i <= N; i++) s[i] = 0;

  char c[103][103];
  for (i = 0; i <= H + 1; i++) {
    for (j = 0; j <= W + 1; j++) {
      if (i == 0 || j == 0 || i == H + 1 || j == W + 1)
        c[i][j] = '.';
      else {
        scanf(" %c", &c[i][j]);
      }
    }
  }

  for (i = 1; i <= H; i++) {
    for (j = 1; j <= W; j++) {
      if (c[i][j] == '#') {
        int cnt = 0;
        for (d = 1; d <= N; d++) {
          if (c[i + d][j + d] == '#' && c[i + d][j - d] == '#' &&
              c[i - d][j + d] == '#' && c[i - d][j - d] == '#')
            cnt++;
          else {
            s[cnt]++;
            break;
          }
        }
      }
    }
  }

  for (i = 1; i <= N; i++) {
    printf("%d ", s[i]);
  }
  return 0;
}