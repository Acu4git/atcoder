#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int k, N, a[100];
  scanf("%d", &N);
  char s[100][11];
  int min = 1000000000;
  for (int i = 0; i < N; i++) {
    scanf("%s %d", s[i], &a[i]);
    if (a[i] < min) {
      min = a[i];
      k = i;
    }
  }
  for (int i = k; i < k + N; i++) {
    printf("%s\n", s[i % N]);
  }
  return 0;
}