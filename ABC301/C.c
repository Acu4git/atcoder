#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, j, len, salph_cnt[27] = {0}, talph_cnt[27] = {0};
  char s[200003], t[200003];
  scanf("%s%s", s, t);
  len = strlen(s);
  for (i = 0; i < len; i++) {
    if (s[i] != '@')
      salph_cnt[s[i] - 'a' + 1]++;
    else
      salph_cnt[0]++;

    if (t[i] != '@')
      talph_cnt[t[i] - 'a' + 1]++;
    else
      talph_cnt[0]++;
  }

  for (i = 1; i <= 26; i++) {
    if (salph_cnt[i] > talph_cnt[i]) {
      if (!(i == 1 || i == 3 || i == 4 || i == 5 || i == 15 || i == 18 ||
            i == 20)) {
        puts("No");
        exit(0);
      }
      for (j = 0; j < salph_cnt[i] - talph_cnt[i]; j++) {
        if (talph_cnt[0] == 0) {
          puts("No");
          exit(0);
        }
        talph_cnt[0]--;
      }
    } else if (salph_cnt[i] < talph_cnt[i]) {
      if (!(i == 1 || i == 3 || i == 4 || i == 5 || i == 15 || i == 18 ||
            i == 20)) {
        puts("No");
        exit(0);
      }
      for (j = 0; j < talph_cnt[i] - salph_cnt[i]; j++) {
        if (salph_cnt[0] == 0) {
          puts("No");
          exit(0);
        }
        salph_cnt[0]--;
      }
    }
  }
  puts("Yes");
  return 0;
}