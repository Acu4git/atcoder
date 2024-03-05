#include <iostream>
using namespace std;

int a[109][109];
int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) cin >> a[i][j];
  }

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (a[i][j] == 1) cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}