#include <stdio.h>
#define N_MAX 200000

int main() {
  long N, Q, a[N_MAX + 1] = {0};
  scanf("%ld", &N);
  for (int i = 1; i <= N; i++) scanf("%ld", a + i);
  scanf("%ld", &Q);

  long add[N_MAX + 1] = {0}, add_all = 0;
  for (int i = 0; i < Q; i++) {
    int j, q, x;
    scanf("%d", &q);
    if (q == 1) {
      scanf("%d", &x);
      add_all += x;
    }
    if (q == 2) {
      scanf("%d%d", &j, &x);
      add[j] += x;
    }
    if (q == 3) {
      scanf("%d", &j);
      printf("\n%ld\n", a[j] + add[j] + add_all);
    }
  }

  return 0;
}