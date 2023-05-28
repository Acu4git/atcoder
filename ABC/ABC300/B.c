#include <stdio.h>
#include <stdlib.h>

int main() {
  int s, t, i, j, H, W;
  scanf("%d%d", &H, &W);

  char a[33][33], b[33][33];
  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      scanf(" %c", &a[i][j]);
    }
  }
  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      scanf(" %c", &b[i][j]);
    }
  }
  for (t = 0; t < W; t++) {
    for (s = 0; s < H; s++) {
      int cnt = 0;

      for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
          if (a[i][j] == b[i][j]) cnt++;
        }
      }
      if (cnt == (H * W)) {
        puts("Yes");
        exit(0);
      }

      for (j = 0; j < W; j++) {
        for (i = 0; i < H - 1; i++) {
          char tmp_column;
          tmp_column = a[i][j];
          a[i][j] = a[i + 1][j];
          a[i + 1][j] = tmp_column;
        }
      }
    }
    for (i = 0; i < H; i++) {
      for (j = 0; j < W - 1; j++) {
        char tmp_line;
        tmp_line = a[i][j];
        a[i][j] = a[i][j + 1];
        a[i][j + 1] = tmp_line;
      }
    }
  }
  puts("No");
  return 0;
}