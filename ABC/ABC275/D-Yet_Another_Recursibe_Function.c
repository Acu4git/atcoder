#include <stdio.h>
#define M 100000000

long memo[M] = {0};

long func(long x) {
  if (x < M) {
    if (memo[x] >= 1)
      return memo[x];
    else
      return memo[x] = func(x / 2) + func(x / 3);
  }

  else
    return func(x / 2) + func(x / 3);
}

int main() {
  long N;
  scanf("%ld", &N);
  memo[0] = 1;
  memo[1] = 2;

  printf("%ld\n", func(N));
  return 0;
}