#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[17];
  scanf("%s", s);
  int flag = 1;
  for (int i = 0; i < strlen(s); i++) {
    if (i % 2 == 1 && s[i] == '1') flag = 0;
  }
  puts(flag == 1 ? "Yes" : "No");
  return 0;
}