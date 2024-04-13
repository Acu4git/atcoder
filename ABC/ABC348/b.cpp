#include <iostream>
using namespace std;

int d_pow(int x1, int y1, int x2, int y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  int N;
  cin >> N;
  int x[N], y[N];
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }

  for (int i = 0; i < N; i++) {
    int max = -1, tmp;
    int pos = 0;
    for (int j = 0; j < N; j++) {
      if ((tmp = d_pow(x[i], y[i], x[j], y[j])) > max) {
        pos = j;
        max = tmp;
      }
    }
    cout << pos + 1 << endl;
  }
}
