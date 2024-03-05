#include <iostream>
#include <list>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

int main() {
  int N, Q;
  string s;
  cin >> N >> s >> Q;

  unordered_map<char, list<int>> index_map;
  for (int i = 0; i < s.length(); i++) index_map[s[i]].emplace_back(i + 1);

  while (Q--) {
    char c, d;
    cin >> c >> d;
    index_map[d].splice(index_map[d].end(), move(index_map[c]));
  }

  string ans(N, ' ');
  for (auto [c, idx_list] : index_map) {
    for (auto i : idx_list) {
      ans[i - 1] = c;
    }
  }

  cout << ans << endl;
}