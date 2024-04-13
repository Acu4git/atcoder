#include <iostream>
using namespace std;

int a[109];

int main() {
  int N, sum = 0;
  cin >> N;
  for (int i = 0; i < N - 1; i++) {
    cin >> a[i];
    sum += a[i];
  }
  cout << -1 * sum << endl;
}