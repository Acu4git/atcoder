#include <stdio.h>
#include <string.h>

int main() {
  char str[9];
  scanf("%s", str);
  int i, j, cnt = 0, flag_B, flag_K;
  for (i = 0; i < strlen(str); i++) {
    for (j = i + 1; j < strlen(str); j++) {
      if (str[i] == 'B' && str[j] == 'B') {
        flag_B = (((i + j) % 2 == 1) ? 1 : 0);
      }
    }
    if (str[i] == 'R') cnt++;
    if (str[i] == 'K') {
      flag_K = ((cnt == 1) ? 1 : 0);
    }
  }
  puts((flag_B == 1 && flag_K == 1) ? "Yes" : "No");
  return 0;
}