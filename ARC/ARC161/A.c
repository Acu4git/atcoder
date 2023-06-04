#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
  if (*(int *)a > *(int *)b)
    return 1;
  else if (*(int *)a < *(int *)b)
    return -1;
  else
    return 0;
}

int main() {
  int N, a[200001] = {0};
  scanf("%d", &N);
  for (int i = 1; i <= N; i++) scanf("%d", a + i);
  qsort(a + 1, N, sizeof(int), comp);
}