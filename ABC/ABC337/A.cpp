#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int x[N], y[N], ttl_x = 0, ttl_y = 0;
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
    ttl_x += x[i];
    ttl_y += y[i];
  }

  if (ttl_x > ttl_y)
    cout << "Takahashi" << endl;
  else if (ttl_x == ttl_y)
    cout << "Draw" << endl;
  else
    cout << "Aoki" << endl;
}