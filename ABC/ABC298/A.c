#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, cnt = 0;
  scanf("%d", &N);
  char s[101];
  scanf("%s", s);
  for (int i = 0; i < N; i++) {
    if (s[i] == 'o') cnt++;
    if (s[i] == 'x') {
      puts("No");
      exit(0);
    }
  }
  puts(cnt > 0 ? "Yes" : "No");
  return 0;
}
