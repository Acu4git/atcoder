#include <iostream>
#include <string>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;

  // sum[i]:文字列の最初のi文字からなる部分文字列において，同じ英子文字が2つ隣り合う箇所の合計
  int sum[N + 1];
  for (int i = 2; i <= N; i++) {
    sum[i] = sum[i - 1];
    if (S[i - 2] == S[i - 1]) sum[i]++;
  }

  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    cout << sum[r] - sum[l] << endl;
  }
}