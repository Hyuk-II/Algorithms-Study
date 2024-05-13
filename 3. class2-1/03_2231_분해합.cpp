// 2024.03.18
// 245의 분해합은 256(=245+2+4+5)이 된다. 따라서 245는 256의 생성자가 된다. 물론, 어떤 자연수의 경우에는 생성자가 없을 수도 있다.
// 반대로, 생성자가 여러 개인 자연수도 있을 수 있다. 자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int num = 0;

    cin >> N;
    for(int i = 1; i <= N; i++) {
        num = i;
        sum = num;
        while(num > 0) {
            sum += num%10;
            num = num / 10;
        }
        if (sum == N) {
            cout << i << '\n';
            break;
        }
        if (i == N) {
            cout << 0 << '\n';
        }
      // 1부터 N까지 모든 수를 확인하면서 가장 처음 나오는 생성자를 출력한다.
      // 분해합에는 규칙이 없기 때문에 전역 탐색으로 찾는다
    }

    return 0;
}
