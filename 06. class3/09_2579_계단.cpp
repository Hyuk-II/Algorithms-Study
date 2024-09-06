// 2024.09.05

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int *stair, *dp;
    stair = new int[N];
    dp = new int[N + 1];

    for (int i = 0; i < N; i++) {
        cin >> stair[i];
    }

    dp[1] = stair[0];
    dp[2] = stair[0] + stair[1];

    for (int i = 3; i < N + 1; i++) {
        dp[i] = max(dp[i - 2] + stair[i - 1],
                    dp[i - 3] + stair[i - 2] + stair[i - 1]);
    }

    cout << dp[N] << endl;

    delete[] stair;
    delete[] dp;
}