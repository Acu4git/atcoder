#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, H, W;
  scanf("%d%d", &H, &W);
  char **str = (char **)malloc(sizeof(char *) * H);
  for (i = 0; i < H; i++) {
    str[i] = (char *)malloc(sizeof(char) * (W + 1));
    scanf("%s", str[i]);
  }

  for (i = 0; i < H; i++) {
    for (j = 0; j < W - 1; j++) {
      if (str[i][j] == 'T' && str[i][j + 1] == 'T') {
        str[i][j] = 'P';
        str[i][j + 1] = 'C';
      }
    }
  }

  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      printf("%c", str[i][j]);
    }
    putchar('\n');
  }
  return 0;
}