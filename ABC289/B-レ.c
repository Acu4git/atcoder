#include <stdio.h>

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  int a[105], ans[105];
  int i, j;
  for (i = 0; i < M; i++) {
    scanf("%d", a + i);
  }

  int l, r;
  l = 1;
  i = 0;
  while (l <= N) {
    r = l;
    while (r <= N - 1) {
      if (i < M && r == a[i]) {
        r++;
        i++;
      } else
        break;
    }
    for (j = r; j >= l; j--) {
      ans[r + l - j - 1] = j;
    }
    l = r + 1;
  }

  for (i = 0; i < N; i++) {
    printf("%d ", ans[i]);
  }
  return 0;
}