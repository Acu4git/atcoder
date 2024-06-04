#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int a[200009], idx[200009];
int main() {
  int N, k = 0;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
    idx[a[i]] = i;
  }

  vector<pair<int, int>> v;
  for (int i = 1; i <= N - 1; i++) {
    if (a[i] == i) continue;
    pair<int, int> p = make_pair(i, idx[i]);
    v.emplace_back(p);
    int tmp_elem = a[i];
    int tmp_idx = idx[i];
    swap(a[i], a[idx[i]]);
    idx[i] = i;
    idx[tmp_elem] = tmp_idx;
    k++;
  }

  //   cout << "sorted : ";
  //   for (int i = 1; i <= N; i++) cout << a[i] << " ";
  //   cout << endl;

  cout << k << endl;
  for (auto [f, s] : v) {
    cout << f << " " << s << endl;
  }
}