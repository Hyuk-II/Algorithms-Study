// 2024.03.18
// 입력시간의 45분전 출력

#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    M -= 45;

    if(M<0) {
        if(H>0) {
            H--;
            M = 60+M;
        }
        else if (H==0) {
            H=23;
            M = 60+M;
        }
    }

    cout << H << ' ' << M << endl;

    return 0;
}
