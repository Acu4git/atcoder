#include <stdio.h>
#include <string.h>

int main() {
  char str[101];
  scanf("%s", str);
  int i, len;
  len = strlen(str);
  for (i = 0; i < len; i++) {
    printf("%c", str[i] - ('a' - 'A'));
  }
  return 0;
}