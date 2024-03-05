#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long a[N + 1], s[N], t[N];
  for (int i = 1; i <= N; i++) cin >> a[i];
  for (int i = 1; i <= N - 1; i++) cin >> s[i] >> t[i];

  for (int i = 1; i <= N - 1; i++) {
    a[i + 1] += a[i] / s[i] * t[i];
  }

  cout << a[N] << endl;
}