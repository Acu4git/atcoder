#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int c[N], t = 0;
  string s[N];
  for (int i = 0; i < N; i++) {
    cin >> s[i] >> c[i];
    t += c[i];
  }

  sort(s, s + N);

  for (int i = 0; i < N; i++) {
    if (i == t % N) cout << s[i] << endl;
  }
}