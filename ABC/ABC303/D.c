#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ON 1
#define OFF 0

/**
 * dp[i][j]
 *i 文字目まで入力した時点で CapsLock キーのランプが
 *j=0 ならばOFF、j=1 ならばONである状態にするために必要な時間の最小値
 */
long long dp[300001][2];

long long min(long long a, long long b, long long c) {
  long long min = a;
  if (b < min) min = b;
  if (c < min) min = c;
  return min;
}

int main() {
  long long i, x, y, z, N;
  scanf("%lld%lld%lld", &x, &y, &z);
  char s[300001];
  scanf("%s", s);
  N = strlen(s);

  dp[0][OFF] = 0;
  dp[0][ON] = z;

  for (i = 1; i <= N; i++) {
    if (s[i - 1] == 'a') {
      dp[i][ON] = min(dp[i - 1][ON] + y, dp[i - 1][OFF] + x + z,
                      dp[i - 1][OFF] + y + z);
      dp[i][OFF] =
          min(dp[i - 1][OFF] + x, dp[i - 1][ON] + x + z, dp[i - 1][ON] + y + z);
    }
    if (s[i - 1] == 'A') {
      dp[i][ON] = min(dp[i - 1][ON] + x, dp[i - 1][OFF] + x + z,
                      dp[i - 1][OFF] + y + z);
      dp[i][OFF] =
          min(dp[i - 1][OFF] + y, dp[i - 1][ON] + x + z, dp[i - 1][ON] + y + z);
    }
  }
  long long minmum = (dp[N][ON] > dp[N][OFF]) ? dp[N][OFF] : dp[N][ON];
  printf("%lld", minmum);
  return 0;
}