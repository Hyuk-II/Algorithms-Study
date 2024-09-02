// 2024.09.02

#include <iostream>
#include <string>
using namespace std;

class Set {
  public:
    Set() {
        for (int i = 0; i < 20; i++) {
            arr[i] = 0;
        }
    }

    void add(int x) { arr[x - 1] = 1; }
    void remove(int x) { arr[x - 1] = 0; }
    int check(int x) { return arr[x - 1]; }
    void toggle(int x) { arr[x - 1] = (arr[x - 1] == 1 ? 0 : 1); }
    void all() {
        for (int i = 0; i < 20; i++) {
            arr[i] = 1;
        }
    }
    void empty() {
        for (int i = 0; i < 20; i++) {
            arr[i] = 0;
        }
    }

  private:
    int arr[20];
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int M;
    cin >> M;

    Set s;

    for (int i = 0; i < M; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "add") {
            int x;
            cin >> x;
            s.add(x);
        } else if (cmd == "remove") {
            int x;
            cin >> x;
            s.remove(x);
        } else if (cmd == "check") {
            int x;
            cin >> x;
            cout << s.check(x) << '\n';
        } else if (cmd == "toggle") {
            int x;
            cin >> x;
            s.toggle(x);
        } else if (cmd == "all") {
            s.all();
        } else if (cmd == "empty") {
            s.empty();
        }
    }
}