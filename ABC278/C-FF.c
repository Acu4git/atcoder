#include <stdio.h>
#include <stdlib.h>
#define BACKET_SIZE 1000003

typedef struct cell {
  int from;
  int to;
  struct cell *next;
} CELL;
CELL *table[BACKET_SIZE];

// ハッシュテーブルの初期化
void init() {
  int i;
  for (i = 0; i < BACKET_SIZE; i++) {
    table[i] = NULL;
  }
}

// ハッシュ値を返す
int hash(int a, int b) {
  long key;
  key = ((long)307 * a + b) % BACKET_SIZE;
  return (int)key;
}

// 順序対(a,b)があればCELL型へのポインタを、なければNULLを返す
CELL *find(int a, int b) {
  int h = hash(a, b);
  if (table[h] == NULL) {
    return NULL;
  }

  CELL *p = NULL;
  p = table[h];
  while (p != NULL) {
    if (p->from == a && p->to == b) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

// 新しい要素が前に来るように挿入していく
void insert(int a, int b) {
  if (find(a, b) != NULL) return;
  int h = hash(a, b);
  CELL *new;
  new = (CELL *)malloc(sizeof(CELL));
  new->from = a;
  new->to = b;
  new->next = table[h];
  table[h] = new;
}

// 順序対(a,b)をテーブルから削除する
void delete(int a, int b) {
  CELL *p, *q;
  int h = hash(a, b);
  if (table[h] == NULL) return;
  if (table[h]->from == a && table[h]->to == b) {
    p = table[h];
    table[h] = p->next;
    free(p);
    return;
  }

  for (q = table[h], p = q->next; p != NULL; q = p, p = p->next) {
    if (p->from == a && p->to == b) {
      q->next = p->next;
      free(p);
      return;
    }
  }
}

int main() {
  init();
  int N, Q;
  scanf("%d%d", &N, &Q);
  for (int i = 0; i < Q; i++) {
    int t, a, b;
    scanf("%d%d%d", &t, &a, &b);
    if (t == 1) {
      insert(a, b);
    }
    if (t == 2) {
      delete (a, b);
    }
    if (t == 3) {
      if (find(a, b) != NULL && find(b, a) != NULL)
        puts("Yes");
      else
        puts("No");
    }
  }
  return 0;
}