#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, j, H, W;
  scanf("%d%d", &H, &W);
  char s[100][103];
  for (i = 0; i < H; i++) {
    scanf("%s", s[i]);
  }

  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      char *str = "snuke";
      if (s[i][j] == 's') {
        char buf[6] = {'s', 'z', 'z', 'z', 'z', '\0'};
        int k, l, cnt = 0;
        k = i;
        l = j;
        while (cnt < 4 && l + 1 < W) {
          buf[++cnt] = s[k][++l];
        }
        if (cnt == 4 && !strcmp(buf, str)) {
          for (k = i, l = j; cnt >= 0; l++, cnt--)
            printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt < 4 && k + 1 < H && l + 1 < W) {
          buf[++cnt] = s[++k][++l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; cnt >= 0; k++, l++, cnt--)
            printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt < 4 && k + 1 < H) {
          buf[++cnt] = s[++k][l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; (cnt--) >= 0; k++) printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt < 4 && k + 1 < H && l - 1 >= 0) {
          buf[++cnt] = s[++k][--l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; (cnt--) >= 0; k++, l--)
            printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt + 1 < 5 && l - 1 >= 0) {
          buf[++cnt] = s[k][--l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; (cnt--) >= 0; l--) printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt + 1 < 5 && k - 1 >= 0 && l - 1 >= 0) {
          buf[++cnt] = s[--k][--l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; (cnt--) >= 0; k--, l--)
            printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt + 1 < 5 && k - 1 >= 0) {
          buf[++cnt] = s[--k][l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; (cnt--) >= 0; k--) printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }

        k = i;
        l = j;
        cnt = 0;
        while (cnt + 1 < 5 && k - 1 >= 0 && l + 1 < W) {
          buf[++cnt] = s[--k][++l];
        }
        if (cnt == 4 && strcmp(buf, str) == 0) {
          for (k = i, l = j; (cnt--) >= 0; k--, l++)
            printf("%d %d\n", k + 1, l + 1);
          exit(0);
        }
      }
    }
  }
  return 0;
}