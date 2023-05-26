#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long long a, b;
  scanf("%lld%lld", &a, &b);
  if (a % b == 0)
    printf("%lld", a / b);
  else
    printf("%lld", a / b + 1);
  return 0;
}