#include <stdio.h>
#define N_MAX 200001

int main() {
  int i, j, N, len, max = -1;
  scanf("%d", &N);
  char str[N_MAX];
  scanf("%s", str);

  i = 0;
  while (i < N) {
    int cnt = 0;
    if (str[i] == 'o') {
      j = i;
      while (j < N && str[j] == 'o') {
        cnt++;
        j++;
      }
      if (cnt > max) max = cnt;
      i += cnt;
    } else
      i++;
  }
  if (max == N) {
    puts("-1");
  } else {
    printf("%d", max);
  }
  return 0;
}