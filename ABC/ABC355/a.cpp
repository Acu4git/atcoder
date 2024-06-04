#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int H, i = 0, cur = 0;
  cin >> H;

  while (cur <= H) {
    cur += (1 << i);
    i++;
  }
  cout << i << endl;
}