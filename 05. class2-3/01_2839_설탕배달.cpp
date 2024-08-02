// 2024.04.09
// 5kg, 3kg의 봉지로 상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

#include <iostream>
using namespace std;

int smallest(int);

int main() {
    int N;
    cin >> N;

    cout << smallest(N);
}

int smallest(int N) {
    int tmp = N;
    int f, t;
    f = t = 0;
    if(N == 5 || N == 3) {
        return 1;
    }

    int cnt = 10000;
    for (int i = 0; i <= N / 5; i++) {
        tmp = N;
        tmp = N - 5 * i;
        if (tmp % 3 == 0) {
            f = i;
            t = tmp / 3;
            if (f + t < cnt) {
                cnt = f + t;
            }
        }
    }
    if (cnt == 10000)
        return -1;
    return cnt;
}
