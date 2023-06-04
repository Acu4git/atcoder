#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N_MAX 100
#define K_MAX 1000000000

int main() {
  int N, K, Q, a[N_MAX + 1][N_MAX + 1] = {0};
  scanf("%d%d", &N, &K);
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  scanf("%d", Q);
  for (int q = 0; q < Q; q++) {
    long s, t;
    scanf("%ld%ld", &s, &t);
  }
}