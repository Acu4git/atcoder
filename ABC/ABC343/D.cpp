#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

long long player[200009];
int main() {
  int N, T;
  cin >> N >> T;

  set<long long> st{0};
  for (int i = 1; i <= T; i++) {
    int a, b;
    cin >> a >> b;
    player[a] += b;
    st.insert(player[a]);
    if (*min_element(begin(player) + 1, begin(player) + N) != *begin(st))
      st.erase(*begin(st));
    // debug
    cout << "debug(" << i << ") => {";
    for (auto x : st) {
      cout << x << ",";
    }
    cout << "}" << endl;
    cout << st.size() << endl;
  }

  return 0;
}