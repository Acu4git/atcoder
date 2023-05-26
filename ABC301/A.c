#include <stdio.h>

int main() {
  int N, cnt_T = 0, cnt_A = 0;
  char s[103];
  scanf("%d%s", &N, s);
  if (N % 2 == 0) {
    for (int i = 0; i < N; i++) {
      if (s[i] == 'T')
        cnt_T++;
      else
        cnt_A++;
      if (cnt_T == N / 2) {
        putchar('T');
        break;
      } else if (cnt_A == N / 2) {
        putchar('A');
        break;
      }
    }
  } else {
    for (int i = 0; i < N; i++) {
      if (s[i] == 'T')
        cnt_T++;
      else
        cnt_A++;
    }
    if (cnt_T > cnt_A)
      putchar('T');
    else
      putchar('A');
  }
  return 0;
}