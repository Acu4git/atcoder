#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  char a[109][109], b[109][109];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> b[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (a[i][j] != b[i][j]) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
}