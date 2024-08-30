// 2024.08.30

#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int K, N;
    cin >> K >> N;
    vector<int> LAN(K);

    for (int i = 0; i < K; i++) {
        cin >> LAN[i];
    }

    long long start = 1;
    long long end;
    for (int i = 0; i < K; i++) {
        end += LAN[i];
    }
    end /= N;
    long long mid;
    long long ret = 0;

    while (start <= end) {
        mid = (start + end) / 2;

        long long cnt = 0;
        for (int i = 0; i < K; i++) {
            cnt += LAN[i] / mid;
        }

        if (cnt >= N) {
            start = mid + 1;
            ret = max(ret, mid);
        } else {
            end = mid - 1;
        }
    }

    cout << ret << endl;
}