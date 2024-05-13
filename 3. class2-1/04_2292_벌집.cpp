// 2024.03.19
// 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 (시작과 끝을 포함하여)
// 몇 개의 방을 지나가는지를 계산하는 프로그램을 작성하시오.
// 2~7 1개, 8~19 2개, 20~37 3개, 38~51 4개
// 1+6     1+6+12   1+6+12+18
#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt;
    int sum = 1;
    cin >> N;

    for (cnt = 1; N>sum; cnt++) {
        sum += 6*cnt;
    } // 현재 sum이 주어진 값을 넘어 갈때까지, sum에 cnt를 1씩 증가시키며 6을 곱해 더한다

    cout << cnt << '\n';
    return 0;
}
