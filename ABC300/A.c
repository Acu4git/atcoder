#include <stdio.h>

int main() {
  int N, A, B, c[300];
  scanf("%d%d%d", &N, &A, &B);
  for (int i = 0; i < N; i++) {
    scanf("%d", c + i);
    if (c[i] == (A + B)) {
      printf("%d", i + 1);
    }
  }
  return 0;
}