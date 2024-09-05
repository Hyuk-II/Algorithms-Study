// 2024.09.04

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<int, string> m1;
    map<string, int> m2;

    string input;
    for (int i = 0; i < N; i++) {
        cin >> input;
        m1.insert(make_pair(i, input));
    }

    for (int i = 0; i < M; i++) {
        cin >> input;
        m2.insert(make_pair(input, i));
    }

    int cnt = 0;
    vector<string> s;
    for (int i = 0; i < N; i++) {
        if (m2.count(m1[i]) == 1) {
            cnt += m2.count(m1[i]);
            s.push_back(m1[i]);
        }
    }

    sort(s.begin(), s.end());

    cout << cnt << '\n';
    for (vector<string>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << '\n';
    }
}