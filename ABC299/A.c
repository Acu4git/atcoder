#include <stdio.h>
#include <string.h>

int main() {
  int N, cnt = 0;
  scanf("%d", &N);
  char str[101];
  scanf("%s", str);
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == '|') cnt++;
    if (str[i] == '*') {
      puts((cnt == 1) ? "in" : "out");
    }
  }
  return 0;
}