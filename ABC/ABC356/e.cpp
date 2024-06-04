#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  vector<int> a(N);
  for (auto &x : a) cin >> x;
  sort(a.begin(), a.end());
}