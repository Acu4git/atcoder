#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[11];
  scanf("%s", str);
  int i, n, len;
  n = atoi(str);
  len = strlen(str);
  for (i = 0; i < len; i++) {
    if (str[i] == '0')
      str[i] = '1';
    else if (str[i] == '1')
      str[i] = '0';
  }
  printf("%s", str);
  return 0;
}