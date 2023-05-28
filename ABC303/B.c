#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, N, M, a[50][50], flag[51][51] = {0}, cnt = 0;
  scanf("%d%d", &N, &M);
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) scanf("%d", &a[i][j]);
  }
  for (i = 0; i < M; i++) {
    for (j = 0; j < N - 1; j++) {
      flag[a[i][j]][a[i][j + 1]] = 1;
      flag[a[i][j + 1]][a[i][j]] = 1;
    }
  }

  for (i = 1; i <= N; i++) {
    for (j = i + 1; j <= N; j++) {
      if (i != j && flag[i][j] == 0) cnt++;
    }
  }
  printf("%d\n", cnt);
  return 0;
}