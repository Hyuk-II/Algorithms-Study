// 2024.09.07
#include <iostream>
using namespace std;

int cnt[11] = {
    1,
    2,
    4,
};

int compute(int n) {
    if (n == 1 || n == 2 || n == 3) {
        return cnt[n - 1];
    } else {
        if (cnt[n - 1] == 0) {
            cnt[n - 1] = compute(n - 1) + compute(n - 2) + compute(n - 3);
        }
    }

    return cnt[n - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << compute(n) << '\n';
    }
}