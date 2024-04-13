#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int main() {
  long N, K, sum = 0;
  cin >> N >> K;

  set<int> numSet;
  int a[N];
  for (auto &x : a) {
    cin >> x;
    numSet.insert(x);
  }
  for (auto n : numSet)
    if (n <= K) sum += n;

  cout << K * (K + 1) / 2 - sum << endl;
}