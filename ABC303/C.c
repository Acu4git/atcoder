#include <stdio.h>
#include <stdlib.h>
#define BUCKET_SIZE 200000

typedef struct cell {
  int x;
  int y;
  struct cell *next;
} CELL;
CELL *table[BUCKET_SIZE];

void init() {
  int i;
  for (i = 0; i < BUCKET_SIZE; i++) {
    table[i] = NULL;
  }
}

int hash(int a, int b) {
  int ret = (37 * a + b) % BUCKET_SIZE;
  if (ret < 0) ret += BUCKET_SIZE;
  return ret;
}

CELL *find(int a, int b) {
  int h = hash(a, b);
  if (table[h] == NULL) {
    return NULL;
  }

  CELL *p = NULL;
  p = table[h];
  while (p != NULL) {
    if (p->x == a && p->y == b) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

void insert(int a, int b) {
  if (find(a, b) != NULL) return;
  int h = hash(a, b);
  CELL *new;
  new = (CELL *)malloc(sizeof(CELL));
  new->x = a;
  new->y = b;
  new->next = table[h];
  table[h] = new;
}

void delete(int a, int b) {
  CELL *p, *q;
  int h = hash(a, b);
  if (table[h] == NULL) return;
  if (table[h]->x == a && table[h]->y == b) {
    p = table[h];
    table[h] = p->next;
    free(p);
    p = NULL;
    return;
  }

  for (q = table[h], p = q->next; p != NULL; q = p, p = p->next) {
    if (p->x == a && p->y == b) {
      q->next = p->next;
      free(p);
      return;
    }
  }
}

int main() {
  init();

  int N, M, H, K;
  scanf("%d%d%d%d", &N, &M, &H, &K);
  char s[200003];
  scanf("%s", s);
  for (int i = 0; i < M; i++) {
    int x, y;
    scanf("%d%d", &x, &y);
    insert(x, y);
  }

  int posx, posy;
  posx = posy = 0;
  for (int i = 0; i < N; i++) {
    --H;
    if (s[i] == 'R') ++posx;
    if (s[i] == 'L') --posx;
    if (s[i] == 'U') ++posy;
    if (s[i] == 'D') --posy;

    if (H < 0) {
      printf("No");
      exit(0);
    }

    if (find(posx, posy) != NULL && H < K) {
      H = K;
      delete (posx, posy);
    }
  }
  printf("Yes");
  return 0;
}