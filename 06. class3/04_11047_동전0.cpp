// 2024.09.04

#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int *coin;
    coin = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    int i = N - 1;
    int cnt = 0;
    while (K > 0) {
        if (coin[i] <= K) {
            K -= coin[i];
            cnt++;
        } else {
            i--;
        }
    }

    cout << cnt;
    delete[] coin;
}