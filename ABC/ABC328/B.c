#include <stdbool.h>
#include <stdio.h>

bool isMatching(int m, int d) {
  char s[10];
  int ptr = 0;
  while (m > 0) {
    s[ptr++] = '0' + m % 10;
    m /= 10;
  }
  while (d > 0) {
    s[ptr++] = '0' + d % 10;
    d /= 10;
  }
  s[ptr] = '\0';
  // debug
  // printf("%s\n", s);

  for (int i = 1; i <= 9; i++) {
    bool flag = true;
    for (ptr = 0; s[ptr] != '\0'; ptr++) {
      if (s[ptr] != '0' + i) flag = false;
    }
    if (flag) return true;
  }
  return false;
}

int main() {
  int N, D[101], ans = 0;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++) scanf("%d", &D[i]);
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= D[i]; j++) {
      if (isMatching(i, j)) ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}