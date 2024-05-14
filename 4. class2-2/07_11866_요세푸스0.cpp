// 2024.04.02
// 요세푸스 순열 구하기

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    vector<int> v;
    vector<int> c;
    cin >> N >> K;
    int size = N;

    for (int i = 0; i < N; i++) {
        v.push_back(i + 1);
    }

    int next = (K - 1)%size;
    while (size > 1) {
        c.push_back(v[next]);
        v.erase(v.begin()+next);

        size--;
        next = (next+K-1)%size;
    }
    c.push_back(v[0]);

    cout << '<';
    for (int i = 0; i < N; i++) {
        if(i == N-1) {
        cout << c[i];
        }
        else cout << c[i] << ", ";
    }
    cout << '>';
}
