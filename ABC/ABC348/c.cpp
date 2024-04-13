#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, set<int>> m;
  for (int i = 0; i < N; i++) {
    int a, c;
    cin >> a >> c;
    m[c].insert(a);
  }

  int ans = -1;
  for (auto [_, st] : m) {
    int min = *(st.begin());
    ans = (ans < min) ? min : ans;
  }

  cout << ans << endl;
}