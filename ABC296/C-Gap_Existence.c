#include <stdio.h>
#include <stdlib.h>

int Cmpfunc(const void *n1, const void *n2) {
  if (*((long *)n1) > *((long *)n2)) {
    return 1;
  } else if (*((long *)n1) < *((long *)n2)) {
    return -1;
  } else
    return 0;
}

int main() {
  int N;
  scanf("%d", &N);

  long X, *a = (long *)malloc(sizeof(long) * N);
  scanf("%ld", &X);
  for (int i = 0; i < N; i++) {
    scanf("%ld", &a[i]);
  }
  qsort(a, N, sizeof(long), Cmpfunc);

  int left, right;
  right = 0;
  for (left = 0; left < N; left++) {
    while (right < N && a[right] - a[left] <= X) {
      if (a[right] - a[left] == X) {
        puts("Yes");
        exit(0);
      }
      right++;
    }
  }
  puts("No");
  return 0;
}