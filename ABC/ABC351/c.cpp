#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long N;
  cin >> N;

  vector<long long> v;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    v.emplace_back(a);
    while (v.size() > 1) {
      if (v[v.size() - 2] != v[v.size() - 1]) break;
      long long tmp = v[v.size() - 1] + 1;
      v.pop_back();
      v.pop_back();
      v.emplace_back(tmp);
    }
  }

  cout << v.size() << endl;
}