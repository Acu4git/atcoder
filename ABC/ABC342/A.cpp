#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  char major;
  if (s[0] == s[1])
    major = s[0];
  else
    major = s[2];

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != major) {
      cout << i + 1 << endl;
      break;
    }
  }
}