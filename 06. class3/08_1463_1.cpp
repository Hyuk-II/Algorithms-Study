// 2024.09.05

#include <algorithm>
#include <iostream>
using namespace std;

int cnt[1000001] = {
    0,
    0,
    1,
    1,
};

int compute(int n) {
    if (n == 1 || n == 2 || n == 3) {
        return cnt[n];
    } else if (cnt[n] == 0) {
        if (n % 3 == 0 && n % 2 == 0) {
            ++cnt[n] +=
                min(min(compute(n / 3), compute(n / 2)), compute(n - 1));
        }

        else if (n % 3 == 0) {
            ++cnt[n] += min(compute(n / 3), compute(n - 1));
        }

        else if (n % 2 == 0) {
            ++cnt[n] += min(compute(n / 2), compute(n - 1));
        }

        else {
            ++cnt[n] += compute(n - 1);
        }
    }

    return cnt[n];
}

int main() {
    int N;
    cin >> N;

    cout << compute(N) << '\n';
}