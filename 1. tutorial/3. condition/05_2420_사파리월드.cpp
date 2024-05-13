// 2024.03.12
// 두 유명도의 차이 (|N-M|)을 출력

#include <iostream>
using namespace std;

int main() {
    long N, M;
    cin >> N >> M;

    if (N > M) cout << N - M << endl;
    else cout << M - N << endl;
    
    return 0;
}
