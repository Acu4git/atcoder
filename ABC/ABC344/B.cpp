#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a;
  int tmp;
  do {
    cin >> tmp;
    a.emplace_back(tmp);
  } while (tmp != 0);
  for (auto it = a.rbegin(); it != a.rend(); ++it) {
    cout << *it << endl;
  }
}