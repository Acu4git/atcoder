#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  int N, M, L, Q;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a[i];
  cin >> M;
  vector<int> b(M);
  for (int i = 0; i < M; i++) cin >> b[i];
  cin >> L;
  vector<int> c(L);
  for (int i = 0; i < L; i++) cin >> c[i];

  unordered_map<int, int> sum;
  for (int a : a)
    for (int b : b)
      for (int c : c) sum[a + b + c]++;

  cin >> Q;
  while (Q--) {
    int x;
    cin >> x;
    cout << (sum.count(x) ? "Yes" : "No") << endl;
  }
}