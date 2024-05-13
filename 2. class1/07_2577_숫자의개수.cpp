// 2024.03.17
//  A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    int compute;
    int num[10] = {0};

    cin >> A;
    cin >> B;
    cin >> C;
    compute = A*B*C;

    while (compute>0) {
        num[compute%10]++;
        compute /= 10;
    } // 0~9까지 모든 자리수의 숫자 개수 계산

    for(int i = 0; i < 10; i++) {
        cout << num[i] << endl;
    }

    return 0;
}
