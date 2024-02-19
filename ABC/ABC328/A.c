#include <stdio.h>

int main() {
    int n, x, s[10], ans = 0;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
        if (s[i] <= x) ans += s[i];
    }
    printf("%d\n", ans);
    return 0;
}