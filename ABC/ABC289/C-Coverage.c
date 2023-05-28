#include <stdio.h>

int main() {
  int N, M;
  scanf("%d%d", &N, &M);
  int i, j, c[10], a[10][10], flag[15] = {0};
  for (i = 0; i < M; i++) {
    scanf("%d", &c[i]);
    for (j = 0; j < c[i]; j++) {
      scanf("%d", &a[i][j]);
    }
  }
}