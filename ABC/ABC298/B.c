#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define N_MAX 100

int main() {
  int i, j, N, a[N_MAX][N_MAX], b[N_MAX][N_MAX], c[N_MAX][N_MAX];
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  int cnt = 0;
  while (cnt < 4) {
    bool flag = true;
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        if ((a[i][j] == 1) && (b[i][j] == 0)) flag = false;
      }
    }
    if (flag) {
      puts("Yes");
      exit(0);
    }
    /*** a[i][j]=a[N-1-j][i]としてしまうと、正しく変換されない。
        (変換した値を代入してしまう)
    ***/
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        c[i][j] = a[N - 1 - j][i];
      }
    }
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        a[i][j] = c[i][j];
      }
    }
    cnt++;
  }
  puts("No");
  return 0;
}