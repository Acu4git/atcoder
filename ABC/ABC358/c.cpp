#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, M, ans = INT32_MAX;
    cin >> N >> M;

    vector<int> bitCnt(N, 0);
    for (auto &cnt : bitCnt) {
        string s;
        cin >> s;
        for (int i = 0; i < M; i++) {
            if (s[i] == 'o') cnt |= 1 << i;
        }
    }

    // 店の選び方を全部調べる
    for (int i = 0; i < (1 << N); i++) {
        int num = 0;
        int mask = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) {
                mask |= bitCnt[j];
                num++;
            }
        }

        if (mask == (1 << M) - 1 && num < ans) ans = num;
    }

    cout << ans << endl;
}