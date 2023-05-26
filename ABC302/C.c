#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, j, N, M;
  scanf("%d%d", &N, &M);
  char s[8][6];
  for (i = 0; i < N; i++) {
    scanf("%s", s[i]);
  }
  char *p, *q;
  for (i = 0; i < N; i++) {
    for (j = i + 1; j < N; j++) {
      p = s[i];
      q = s[j];
    }
  }
}