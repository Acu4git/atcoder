#include <stdio.h>

int dif_abs(int a, int b) { return (a > b) ? (a - b) : (b - a); }

int dif_abs_is_1(int a, int b) { return (dif_abs(a, b) == 1) ? 1 : 0; }

int main() {
  int i, j, N, a[102], asc[102] = {0}, des[102] = {0};
  scanf("%d", &N);
  for (i = 0; i < N; i++) scanf("%d", a + i);

  for (i = 0; i < N - 1; i++) {
    if (dif_abs_is_1(a[i], a[i + 1]) == 0) {
      if (a[i] < a[i + 1])
        asc[i] = dif_abs(a[i], a[i + 1]) - 1;
      else
        des[i] = dif_abs(a[i], a[i + 1]) - 1;
    }
  }

  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
    if (asc[i] > 0) {
      for (j = a[i] + 1; j <= a[i] + asc[i]; j++) {
        printf("%d ", j);
      }
    } else if (des[i] > 0) {
      for (j = a[i] - 1; j >= a[i] - des[i]; j--) {
        printf("%d ", j);
      }
    }
  }
  return 0;
}