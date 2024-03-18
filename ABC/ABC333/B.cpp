#include <iostream>
using namespace std;

int main() {
  char s1, s2, t1, t2;
  cin >> s1 >> s2 >> t1 >> t2;

  int s = abs(s1 - s2);
  if (2 * s > 5) s = 5 - s;
  int t = abs(t1 - t2);
  if (2 * t > 5) t = 5 - t;

  cout << ((s == t) ? "Yes" : "No") << endl;
}