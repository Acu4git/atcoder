#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, R, L;
  cin >> N >> L >> R;
  vector<int> v(N);
  for (int i = 0; i < N; i++) v[i] = i + 1;
  reverse(v.begin() + L - 1, v.begin() + R);
  for (auto &x : v) cout << x << " ";
  cout << endl;
}