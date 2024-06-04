#include <iostream>
#include <vector>
using namespace std;

int main() {
  string S;
  cin >> S;

  string s = S.substr(3, S.size() - 1);
  if ("001" <= s && s <= "315" || "317" <= s && s <= "349")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}