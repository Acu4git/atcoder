#include <iostream>
using namespace std;

int main() {
  int aoki = 0, takahashi = 0;
  for (int i = 0; i < 9; i++) {
    int x;
    cin >> x;
    takahashi += x;
  }
  for (int i = 0; i < 8; i++) {
    int x;
    cin >> x;
    aoki += x;
  }

  cout << takahashi - aoki + 1 << endl;
}