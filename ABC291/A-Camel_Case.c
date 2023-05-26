#include <stdio.h>
#include <string.h>

int main() {
  char s[105];
  scanf("%s", s);
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if ('A' <= s[i] && s[i] <= 'Z') printf("%d", i + 1);
  }
  return 0;
}