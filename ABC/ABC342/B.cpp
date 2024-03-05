#include <iostream>
using namespace std;

int order[109];
int main() {
  int N, Q;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    int n;
    cin >> n;
    order[n] = i;
  }

  cin >> Q;
  while (Q--) {
    int a, b;
    cin >> a >> b;
    cout << (order[a] < order[b] ? a : b) << endl;
  }
}