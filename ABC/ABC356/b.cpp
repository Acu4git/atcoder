#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int a[109], sum[109], flag[109];
int main() {
  int N, M;
  cin >> N >> M;
  for (int i = 0; i < M; i++) cin >> a[i];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int x;
      cin >> x;
      sum[j] += x;
      if (sum[j] >= a[j]) flag[j] = true;
    }
  }

  for (int i = 0; i < M; i++)
    if (!flag[i]) {
      cout << "No" << endl;
      return 0;
    }
  cout << "Yes" << endl;
}