#include <stdio.h>

int main() {
  int left, right, mid, N;
  scanf("%d", &N);
  left = 1;
  right = N;
  while (left < right) {
    int s;
    mid = (left + right) / 2;
    printf("? %d\n", mid);
    fflush(stdout);
    fscanf(stdin, "%d", &s);
    if (s == 0) {
      left = mid;
    } else if (s == 1) {
      right = mid;
    }

    if (left + 1 == right) {
      printf("! %d\n", left);
      break;
    }
  }
  return 0;
}