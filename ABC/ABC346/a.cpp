#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a[N];
  for (auto &x : a) cin >> x;
  for (int i = 0; i < N - 1; i++) cout << a[i] * a[i + 1] << " ";
  cout << endl;
}