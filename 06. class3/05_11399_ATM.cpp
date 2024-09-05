// 2024.09.04
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int *time;
    time = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> time[i];
    }

    sort(time, time + N);

    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += time[i] * (N - i);
    }

    cout << sum;

    delete[] time;
}