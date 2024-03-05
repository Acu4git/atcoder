#include <iostream>
using namespace std;

int main() {
  long long N;
  cin >> N;

  while (N % 2 == 0) N /= 2;
  while (N % 3 == 0) N /= 3;

  cout << ((N == 1) ? "Yes" : "No") << endl;
}