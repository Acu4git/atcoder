#include <iostream>
using namespace std;
int parent[410000];
int count[410000];

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
    if (k == 1)
      count[1] = 0;
    else
      count[k] = count[parent[k]] + 1;

    cout << count[k] << endl;
  }
}