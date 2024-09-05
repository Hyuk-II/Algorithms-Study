// 2024.09.04

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;

    cin >> M >> N;

    map<int, string> m1;
    map<string, int> m2;

    for (int i = 1; i <= M; i++) {
        string name;
        cin >> name;
        m1.insert(make_pair(i, name));
        m2.insert(make_pair(name, i));
    }

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;

        if (atoi(input.c_str()) == 0) {
            cout << m2[input] << '\n';
        } else {
            cout << m1[stoi(input)] << '\n';
        }
    }
}