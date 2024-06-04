#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check[2009][2009];
int cntRow[2009], cntCol[2009], cntDiag[2];
int main() {
  int N, T;
  cin >> N >> T;

  for (int t = 1; t <= T; t++) {
    int a;
    cin >> a;
    a--;
    int row = a / N;
    int col = a % N;
    check[row][col] = true;
    // for (int i = 0; i < N; i++) {
    //   for (int j = 0; j < N; j++) cout << check[i][j] << " ";
    //   cout << endl;
    // }
    // cout << "*************************" << endl;
    cntRow[row]++;
    cntCol[col]++;
    if (a % (N + 1) == 0) cntDiag[0]++;
    if (a != 0 && a != N * N - 1 && a % (N - 1) == 0) cntDiag[1]++;
    if (cntRow[row] == N || cntCol[col] == N || cntDiag[0] == N ||
        cntDiag[1] == N) {
      cout << t << endl;
      return 0;
    }
  }

  cout << "-1" << endl;
}