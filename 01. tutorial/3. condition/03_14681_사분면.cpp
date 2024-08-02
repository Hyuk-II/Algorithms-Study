// 2024.03.12
// 점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 츨력

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    if (x > 0 && y > 0) {
        cout << 1 << endl;
    }
    else if (x < 0 && y > 0) {
        cout << 2 << endl;
    }
    else if (x < 0 && y < 0) {
        cout << 3 << endl;
    }
    else cout << 4 << endl;
    
    return 0;
}
