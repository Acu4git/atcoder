#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int N;
  scanf("%d", &N);
  int d = 1, len = 0;
  int tmp = N;
  while (tmp > 0) {
    tmp /= 10;
    len++;
  }
  int k = len - 3;
  while (k > 0) {
    d *= 10;
    k--;
  }
  printf("%d", N - N % d);
  return 0;
}