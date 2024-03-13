#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  for (char c : s) {
    if (c == '|') cnt++;
    if (cnt == 1) continue;
    if (cnt % 2 == 0 && c != '|') cout << c;
  }
  cout << endl;
}