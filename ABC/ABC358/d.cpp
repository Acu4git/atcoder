#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> a(N), b(M);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = 0;
    // M個の箱を順番に調べる
    auto left = a.begin();
    bool flag = true;
    for (int i = 0; i < M; i++) {
        auto it = lower_bound(left, a.end(), b[i]);
        if (it == a.end()) {
            flag = false;
            break;
        }
        ans += *it;
        left = it + 1;
    }

    cout << (flag ? ans : -1) << endl;
}