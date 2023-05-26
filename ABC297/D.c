#include <stdio.h>

int main() {
  unsigned long long A, B, cnt = 0;
  scanf("%llu%llu", &A, &B);

  while (A != B) {
    if (A > B) {
      if (B == 1) {
        cnt += A - 1;
        break;
      } else {
        if (A % B == 0) {
          cnt += A / B - 1;
          break;
        } else {
          cnt += A / B;
          A %= B;
        }
      }

    } else {
      if (A == 1) {
        cnt += B - 1;
        break;
      } else {
        if (B % A == 0) {
          cnt += B / A - 1;
          break;
        } else {
          cnt += B / A;
          B %= A;
        }
      }
    }
  }
  printf("%llu", cnt);
  return 0;
}