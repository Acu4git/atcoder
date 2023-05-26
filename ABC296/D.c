#include <stdio.h>

int func1(long long x, long long n) {
  long long i, j;
  for (i = 1; i <= n / 2 && i * i <= x; i++) {
    if (x % i == 0) {
      j = x / i;
      if (j <= n) return 1;
    }
  }
  return 0;
}

int main() {
  int flag;
  long long i, X, N, M;
  scanf("%lld%lld", &N, &M);

  long long left, mid, right;
  left = M;
  right = N * N;
  while (left < right) {
    mid = (left + right) / 2;
    flag = func(mid, N);
    if (flag) right = mid;
  }
}