#include <iostream>
using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  for (int i = 1; i <= N; i++) {
    if (L <= i && i <= R)
      cout << L + R - i;
    else
      cout << i;

    if (i < N)
      cout << " ";
    else
      cout << endl;
  }
}