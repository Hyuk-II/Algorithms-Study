// 2024.09.10

#include <iostream>
using namespace std;

long cnt[101] = {
    0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9,
};
// 0  1  2  3    4    5    6    7    8    9    10    11    12
// 1, 1, 1, 2,   2,   3,   4,   5,   7,   9,   12,   16    21
// 1, 1, 1, 1+1, 1+1, 2+1, 3+1, 4+1, 5+2, 7+2, 9+3,  12+4  16+5

long compute(int n) {
    if (n >= 0 and n <= 10) {
        return cnt[n];
    } else if (cnt[n] == 0) {
        cnt[n] = compute(n - 1) + compute(n - 5);
    }

    return cnt[n];
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << compute(n) << '\n';
    }
}