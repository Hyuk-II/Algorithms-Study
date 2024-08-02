// 2024.04.30
// solved.ac 난이도 계산

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
        return 0;
    }
    int* arr = new int[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+N);
    int except = floor(N*0.15+0.5);

    int avg = 0;
    int cnt = 0;
    for(int i = except; i < N-except; i++) {
        avg += arr[i];
        cnt++;
    }

    avg = floor((double)avg/cnt+0.5);
    cout << avg;

    delete[] arr;
}
