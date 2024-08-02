// 2024.04.09
// 쿼터의 개수, 다임의 개수, 니켈의 개수, 페니의 개수를 공백으로 구분하여 출력한다.
// 25 10 5 1

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int change, q, d, n, p;
        cin >> change;
        q = d = n = p = 0;
        int cnt = 0;
        while (change >= 25)
        {
            change -= 25;
            q++;
        }
        while (change >= 10)
        {
            change -= 10;
            d++;
        }
        while (change >= 5)
        {
            change -= 5;
            n++;
        }
        while (change >= 1)
        {
            change -= 1;
            p++;
        }

        cout << q << " " << d << " " << n << " " << p << "\n";
    }
}
