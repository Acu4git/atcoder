#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long k, N;
  cin >> N;

  vector<long long> v;
  for (long long i = 1; i * i * i <= N; i++) {
    k = i * i * i;
    v.emplace_back(k);
  }

  for (int i = v.size() - 1; i >= 0; i--) {
    k = v[i];
    string s = to_string(k);
    bool flag = true;
    for (int j = 0; j <= s.size() / 2; j++) {
      if (s[j] != s[s.length() - j - 1]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << k << endl;
      break;
    }
  }
  return 0;
}