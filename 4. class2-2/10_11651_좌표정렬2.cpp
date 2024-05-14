// 2024.04.08
// 좌표정렬

#include <iostream>
#include <algorithm>
using namespace std;

class point {
public:
    int x, y;
};

bool compare(point a, point b) {
    if(a.y == b.y) return a.x < b.x;
    else return a.y < b.y;
}

int main() {
    int N;
    cin >> N;

    point* p = new point[N];
    for(int i = 0; i < N; i++) {
        cin >> p[i].x >> p[i].y;
    }

    sort(p, p+N, compare);

    for(int i = 0; i < N; i++) {
        cout << p[i].x << " " << p[i].y << "\n";
    }

    delete[] p;
}
