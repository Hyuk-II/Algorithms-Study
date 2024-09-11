// 2024.09.11

#include <iostream>
using namespace std;

int cnt[1001] = {
    0, 1, 2, 3, 5,
};

int compute(int n) {
    if (n == 1 || n == 2) {
        return cnt[n];
    } else if (cnt[n] == 0) {
        cnt[n] = (compute(n - 1) % 10007 + compute(n - 2) % 10007) % 10007;
    }

    return cnt[n];
}

int main() {
    int n;
    cin >> n;
    cout << compute(n) << endl;
}
// 1 2 3 4 5 6  7  8  9
// 1 2 3 5 8 13 21 34 55