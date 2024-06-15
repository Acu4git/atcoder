#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    int t[N], ans = 0;
    for (auto &x : t) cin >> x;

    for (int i = 0; i < N; i++) {
        if (t[i] >= ans) {
            ans = t[i] + A;
        } else {
            ans += A;
        }

        cout << ans << endl;
    }
}