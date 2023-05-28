#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  long long ans = 0;

  for (int i = 1; i < N; i++) {
    int X = i, Y = N - i;
    long long x = 0, y = 0;
    for (int j = 1; j * j <= X; j++) {
      if (X % j == 0) {
        x++;
        if (X != j * j) x++;  // A,Bを入れ替えたものもカウント
      }
    }
    for (int j = 1; j * j <= Y; j++) {
      if (Y % j == 0) {
        y++;
        if (Y != j * j) y++;  // C,Dを入れ替えたものもカウント
      }
    }
    ans += x * y;
  }
  printf("%lld", ans);
}