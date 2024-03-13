#include <iostream>
using namespace std;
int parent[410000];
int count[410000];

int getCount(int k) {
  if (k == 1) return 0;
  if (count[k] != 0) return count[k];
  return count[k] = getCount(parent[k]) + 1;
}

int main() {
  int N;
  cin >> N;

  parent[1] = -1;
  for (int i = 1; i <= N; i++) {
    int a;
    cin >> a;
    parent[2 * i] = parent[2 * i + 1] = a;
  }

  for (int k = 1; k <= 2 * N + 1; k++) {
    cout << getCount(k) << endl;
  }
}