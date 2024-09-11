// 2024.09.11

#include <iostream>
using namespace std;

int cnt[50001] = {
    0,
    1,
    2,
    3,
};

int compute(int n) {
    if (n >= 0 && n <= 3) {
        return cnt[n];
    } else if (cnt[n] == 0) {
        int i = 1;
        int min = 50000;
        while (i * i < n) {
            int check = compute(n - (i * i)) + compute(i * i);
            if (min > check) {
                min = check;
            }
            i++;
        }
        cnt[n] = min;
    }
    return cnt[n];
}

int main() {
    for (int i = 1; i < 225; i++) {
        if (i * i < 50000) {
            cnt[i * i] = 1;
        }
    }

    int n;
    cin >> n;
    cout << compute(n);
}

// 15663 = 125(2) +  6(2) + 1(2) + 1(2)
// 11339 = 105(2) + 15(2) + 8(2) + 5(2)

// 1 2 3
// 1 2 3

// 4 5 6 7 8
// 1 2 3 4 2

// 9 10 11 12 13 14 15
// 1 2  3  4  2  3  4