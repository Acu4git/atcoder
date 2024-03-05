#include <algorithm>
#include <iostream>
using namespace std;

struct PLAYER {
  int num;
  long long a, b;
};

int main() {
  int N;
  cin >> N;

  PLAYER p[N];
  for (int i = 0; i < N; i++) {
    p[i].num = i + 1;
    cin >> p[i].a >> p[i].b;
  }

  auto comp = [](PLAYER x, PLAYER y) {
    return x.a * (y.a + y.b) > y.a * (x.a + x.b);
  };

  stable_sort(p, p + N, comp);
  for (auto x : p) cout << x.num << " ";
  cout << endl;
}