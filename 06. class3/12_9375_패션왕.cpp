// 2024.09.10

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        map<string, int> m;
        for (int j = 0; j < N; j++) {
            string name, wear;
            cin >> name >> wear;
            if (m.find(wear) != m.end()) {
                m[wear]++;
            } else {
                m.insert(make_pair(wear, 1));
            }
        }

        int sum = 1;
        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
            sum *= it->second + 1;
        }

        cout << sum - 1 << '\n';
    }
}
