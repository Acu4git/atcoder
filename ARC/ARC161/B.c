#include <stdio.h>

typedef unsigned long long ull;

int cntOne(ull N) {
  int cnt = 0;
  for (int i = 0; i <= 60; i++) {
    if (N & ((ull)1 << i)) cnt++;
  }
  return cnt;
}

int cntDigit(ull N) {
  int cnt = 0;
  while (N > 0) {
    N /= 2;
    cnt++;
  }
  return cnt;
}

ull solve(ull N) {
  int n1 = cntOne(N);
  int d = cntDigit(N);
  int i;
  if (n1 == 1) return 7 * ((ull)1 << (d - 4));
  if (n1 == 2) {
    for (i = 0; i < d; i++) {
      if (N & ((ull)1 << i)) break;
    }
    if (i < 2)
      return 3 * ((ull)1 << d - 3);
    else
      return (((ull)1 << d - 1) + 7 * ((ull)1 << (i - 3)));
  }

  for (i = 0; i < d && n1 > 3; i++) {
    if (N & ((ull)1 << i)) {
      N &= (~((ull)1 << i));
      n1--;
    }
  }
  return N;
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    ull N;
    scanf("%llu", &N);
    if (N < 7)
      printf("-1\n");
    else
      printf("%llu\n", solve(N));
  }
  return 0;
}