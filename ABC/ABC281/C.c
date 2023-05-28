#include <stdio.h>
#include <stdlib.h>
int main() {
  long N, T, *a;
  scanf("%ld%ld", &N, &T);
  a = (long*)malloc(sizeof(long) * N);
  long i;
  for (i = 0; i < N; i++) {
    scanf("%ld", a + i);
  }
  long sum_period = 0;
  for (i = 0; i < N; i++) {
    sum_period += a[i];
  }
  return 0;
}