#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  map<int, set<int>> mp;

  if (M == 0) {
    cout << "0" << endl;
    return 0;
  }

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    mp[a].insert(b);
    mp[b].insert(a);
  }
}