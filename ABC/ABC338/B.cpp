#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count[26] = {}, max, max_i;
  for (auto c : s) {
    count[c - 'a']++;
  }

  max = count[0];
  max_i = 0;
  for (int i = 1; i <= 25; i++) {
    if (count[i] > max) {
      max = count[i];
      max_i = i;
    }
  }

  cout << char('a' + max_i) << endl;
}