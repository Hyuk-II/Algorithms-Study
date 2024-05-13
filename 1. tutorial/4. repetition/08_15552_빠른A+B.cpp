// 2024.03.12
// cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    // cin, cout은 묶여있다. cin은 cout의 버퍼를 일일이 지우느라 시간이 오래걸린다.
    // 따라서 cin, cout의 묶음을 해제한다.
    // 대신 입출력의 순서를 보장받을 수 없다. (입력을 할때마다 출력되는 코드는, 모든 입력 이후에 출력이 된다.)

    ios_base::sync_with_stdio(false);
    // C언어의 stdio의 버퍼를 공유하면 딜레이가 발생해 sync를 해제

    int N, A, B;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A >> B;
        cout << A+B << "\n";
        // endl은 버퍼를 지우며 개행을 실행해 시간이 걸린다.
        // cin.tie(NULL)의 역할이 의미가 없어진다.
        // 따라서 \n으로 줄바꿈을 시행한다.
    }

    return 0;
}
