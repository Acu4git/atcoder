#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int H[N];
  for (int i = 0; i < N; i++) cin >> H[i];
  for (int i = 1; i < N; i++) {
    if (H[i] > H[0]) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}