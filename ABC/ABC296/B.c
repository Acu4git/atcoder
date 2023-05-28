#include <stdio.h>

int main() {
  char board[8][9];
  int i, j;
  for (i = 0; i < 8; i++) scanf("%s", board[i]);

  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      if (board[i][j] == '*') {
        printf("%c%d", 'a' + j, 8 - i);
      }
    }
  }
  return 0;
}