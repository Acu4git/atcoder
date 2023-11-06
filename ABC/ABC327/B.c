#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned long long b;
  scanf("%llu", &b);
  for (int i = 1; i <= 15; i++) {
    unsigned long long tmp = 1;
    for (int j = 1; j <= i; j++) {
      tmp *= i;
    }
    if (b == tmp) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 0;
}