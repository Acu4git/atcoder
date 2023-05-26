#include <stdbool.h>
#include <stdio.h>

int main() {
  int N, Q;
  scanf("%d%d", &N, &Q);

  int player_exist[101], player_cnt[101];
  for (int i = 1; i <= N; i++) {
    player_exist[i] = true;
    player_cnt[i] = 0;
  }

  for (int i = 0; i < Q; i++) {
    int c, x;
    scanf("%d%d", &c, &x);
    if (c == 1) {
      if ((++player_cnt[x]) >= 2) player_exist[x] = false;
    } else if (c == 2) {
      player_exist[x] = false;
    } else if (c == 3) {
      if (player_exist[x] == true)
        puts("No");
      else
        puts("Yes");
    }
  }
  return 0;
}