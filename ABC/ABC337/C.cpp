#include <iostream>
using namespace std;

struct Person {
  int num;
  int next;
};

int main() {
  int N;
  cin >> N;

  Person a[N + 1];
  for (int i = 0; i <= N; i++) a[i].next = -1;
  for (int i = 1; i <= N; i++) {
    int x;
    cin >> x;
    a[i].num = i;
    if (x == -1) {
      a[0].next = i;
    } else {
      a[x].next = i;
    }
  }

  int n = a[0].next;
  while (n != -1) {
    cout << n << " ";
    n = a[n].next;
  }
  cout << endl;
}