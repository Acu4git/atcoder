#include <iostream>
#include <map>
using namespace std;

long long player[200009];
int main() {
  int N, T;
  cin >> N >> T;

  map<long long, int> m;
  m[0] = N;
  while (T--) {
    int a, b;
    cin >> a >> b;
    m[player[a]]--;
    if (m[player[a]] == 0) m.erase(player[a]);
    player[a] += b;
    if (!m.count(player[a])) m[player[a]] = 0;
    m[player[a]]++;

    cout << m.size() << endl;
  }

  return 0;
}