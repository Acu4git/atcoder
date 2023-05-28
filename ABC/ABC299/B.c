#include <stdio.h>
#define N_MAX 200000

int main() {
  int i, N, T, c[N_MAX], r[N_MAX], cnt = 0;
  scanf("%d%d", &N, &T);
  for (i = 0; i < N; i++) {
    scanf("%d", c + i);
    if (c[i] == T) cnt++;
  }
  for (i = 0; i < N; i++) {
    scanf("%d", r + i);
  }

  int max, player_id;
  if (cnt == 0) {
    player_id = 1;
    max = r[0];
    for (i = 1; i < N; i++) {
      if ((c[i] == c[0]) && (r[i] > max)) {
        max = r[i];
        player_id = i + 1;
      }
    }
  } else {
    max = 0;
    for (i = 0; i < N; i++) {
      if ((c[i] == T) && (r[i] > max)) {
        max = r[i];
        player_id = i + 1;
      }
    }
  }
  printf("%d", player_id);
  return 0;
}