#include <stdbool.h>
#include <stdio.h>

bool isBigLetter(char c) {
  if ('A' <= c && c <= 'Z') {
    return true;
  } else {
    return false;
  }
}

int main() {
  char s[11];
  scanf("%s", s);
  int idx;
  for (idx = 0; idx <= 7; idx++) {
    if (s[idx] == '\0') {
      puts("No");
      return 0;
    }
  }
  if (isBigLetter(s[0]) == false || isBigLetter(s[7]) == false) {
    puts("No");
    return 0;
  }
  if (!('1' <= s[1] && s[1] <= '9')) {
    puts("No");
    return 0;
  }
  int i;
  for (i = 2; i <= 6; i++) {
    if (!('0' <= s[i] && s[i] <= '9')) {
      puts("No");
      return 0;
    }
  }
  if (s[8] != '\0') {
    puts("No");
    return 0;
  }
  puts("Yes");
  return 0;
}