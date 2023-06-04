#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define Q_SIZE 2000
#define next(a) ((a + 1) % Q_SIZE)
int Q[Q_SIZE];
int Qf, Qr;

void initQ() {
  for (int i = 0; i < Q_SIZE; i++) {
    Q[i] = 0;
  }
  Qf = Qr = 0;
}

void enqueue(int e) {
  Q[Qr] = e;
  Qr = next(Qr);
}

int dequeue() {
  int x = Q[Qf];
  Qf = next(Qf);
  return x;
}

bool emptyQ() {
  if (Qf == Qr)
    return true;
  else
    return false;
}

int powDistance(int a, int b) { return a * a + b * b; }

int main() {
  initQ();
  int N, D, powD;
  scanf("%d%d", &N, &D);
  powD = D * D;
  int x[2000], y[2000], flag[2000];
  for (int i = 0; i < N; i++) {
    scanf("%d%d", &x[i], &y[i]);
    flag[i] = false;
  }
  flag[0] = true;
  enqueue(0);
  while (!emptyQ()) {
    int v = dequeue();
    for (int i = 0; i < N; i++) {
      if (v != i && flag[i] == false &&
          powDistance(x[v] - x[i], y[v] - y[i]) <= powD) {
        flag[i] = true;
        enqueue(i);
      }
    }
  }
  for (int i = 0; i < N; i++) {
    if (flag[i])
      puts("Yes");
    else
      puts("No");
  }
  return 0;
}