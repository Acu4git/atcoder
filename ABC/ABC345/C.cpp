#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  string s;
  cin >> s;
  int N = s.size();
  unordered_map<char, int> charCount;
  for (auto c : s) charCount[c]++;

  long long ans = 0;
  if (charCount.size() < N) ans++;
  for (auto [_, cnt] : charCount) {
    ans += (long long)cnt * (N - cnt);
    N -= cnt;
  }
  cout << ans << endl;
}