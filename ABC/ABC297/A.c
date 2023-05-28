#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, N, D, *t = (int*)malloc(sizeof(int) * N);
  scanf("%d%d", &N, &D);
  for (i = 0; i < N; i++) {
    scanf("%d", t + i);
  }

  for (i = 1; i < N; i++) {
    if (t[i] - t[i - 1] <= D) {
      printf("%d", t[i]);
      return 0;
    }
  }
  puts("-1");
  return 0;
}