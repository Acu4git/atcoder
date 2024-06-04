#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int MOD = 998244353;

int popCount(long long a) {
  int res = 0;
  for (int i = 0; i < 60; i++) {
    if (a & (1LL << i)) res++;
  }
  return res;
}

int main() {
  long long N, M, ans = 0;
  cin >> N >> M;
  for (int k = 0; k <= N; k++) {
    ans = (ans + popCount(k & M)) % MOD;
  }
}