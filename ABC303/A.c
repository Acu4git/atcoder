#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int N, flag = 1;
  scanf("%d", &N);
  char s[102], t[102];
  scanf("%s%s", s, t);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == t[i]) continue;
    if ((s[i] == '1' && t[i] == 'l') || (t[i] == '1' && s[i] == 'l')) continue;
    if ((s[i] == '0' && t[i] == 'o') || (t[i] == '0' && s[i] == 'o')) continue;
    flag = 0;
  }

  puts(flag == 1 ? "Yes" : "No");
  return 0;
}