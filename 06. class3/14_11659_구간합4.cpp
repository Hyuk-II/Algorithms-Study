// 2024.09.10

#include <iostream>
using namespace std;

long long sum[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    sum[0] = 0;
    for (int i = 1; i <= N; i++) {
        int input;
        cin >> input;
        sum[i] += input + sum[i - 1];
    }

    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;

        cout << sum[end] - sum[start - 1] << '\n';
    }
}
