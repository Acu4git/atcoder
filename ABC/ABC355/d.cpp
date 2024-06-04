#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, int> inc, dec;
  set<int> st;
  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;
    st.insert(l);
    st.insert(r);
    inc[l]++;
    dec[r]--;
  }

  vector<int> v;
  int cnt = 0;
  for (auto n : st) {
    if (inc[n] > 0) {
      cnt += inc[n];
    }
    if (dec[n] < 0) {
      for (int i = -1; i >= dec[n]; i--) {
        if (cnt - 1 > 0) v.emplace_back(cnt - 1);
        cnt--;
      }
    }
  }

  int sum = 0;
  for (auto x : v) sum += x;
  cout << sum << endl;
}