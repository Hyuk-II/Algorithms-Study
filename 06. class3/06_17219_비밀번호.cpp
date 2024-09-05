// 2024.09.04

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string link, pwd;
    map<string, string> m;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> link >> pwd;
        m.insert(make_pair(link, pwd));
    }

    for (int i = 0; i < M; i++) {
        cin >> link;
        cout << m[link] << '\n';
    }
}