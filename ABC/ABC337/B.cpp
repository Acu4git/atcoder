#include <iostream>
#include <regex>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex re(R"(A*B*C*)");
  if (regex_match(s, re))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}