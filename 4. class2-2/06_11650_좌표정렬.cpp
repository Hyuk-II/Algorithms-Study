// 2024.04.01
// 2차원 평면 위의 점 N개가 주어진다.
// 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>
using namespace std;

class point {
public:
    int x, y;
};

bool compare(const point &, const point &);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    point list[100000];
    for (int i = 0; i < N; i++) {
        cin >> list[i].x >> list[i].y;
    }

    sort(list, list + N, compare);

    for (int i = 0; i < N; i++) {
        cout << list[i].x << " " << list[i].y << '\n';
    }
}

bool compare(const point& A, const point& B) {
    if(A.x != B.x) return A.x < B.x;
    else {
        if(A.y != B.y) return A.y < B.y;
        else return false;
    }
}
