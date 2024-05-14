// 2024.04.29
// Deque 구현

#include <iostream>
#include <string>
using namespace std;

class Deque {
public:
    Deque() {
        for(int i = 0; i < 10001; i++) {
            deq[i] = 0;
        }
        f = 10000;
        r = 10000;
    }
    void push_front(int num) {
        if(f == (r+1)%10001) {
            cout << "Deque is full\n";
        }
        else {
            if(f == 0) {
                deq[f] = num;
                f = 10000;
            }
            else deq[f--] = num;
        }
    }
    void push_back(int num) {
        if(f == (r+1)%10001) {
            cout << "Deque is full\n";
        }
        else {
            r = (r+1)%10001;
            deq[r] = num;
        }
    }
    void pop_front() {
        if(this->empty()) cout << -1 << "\n";
        else {
            f = (f+1)%10001;
            cout << deq[f] << "\n";
        }
    }
    void pop_back() {
        if(this->empty()) cout << -1 << "\n";
        else {
            cout << deq[r] << "\n";
            if(r == 0) r = 10000;
            else r--;
        }
    }
    void size() {
        int cnt = 0;
        int i = f;
        while(i != r) {
            cnt++;
            i = (i+1)%10001;
        }
        cout << cnt << "\n";
    }
    int empty() {
        if(f == r) return 1;
        else return 0;
    }
    void front() {
        int first = (f+1)%10001;
        if(this->empty()) cout << -1 << "\n";
        else cout << deq[first] << "\n";
    }
    void back() {
        if(this->empty()) cout << -1 << "\n";
        else cout << deq[r] << "\n";
    }

private:
    int deq[10001];
    int f;
    int r;
};

int main() {
    Deque d;
    int N;
    cin >> N;
    string cmd;

    for(int i = 0; i < N; i++) {
        cin >> cmd;

        if(cmd == "push_front") {
            int num;
            cin >> num;
            d.push_front(num);
        }
        else if(cmd == "push_back") {
            int num;
            cin >> num;
            d.push_back(num);
        }
        else if(cmd == "pop_front") {
            d.pop_front();
        }
        else if(cmd == "pop_back") {
            d.pop_back();
        }
        else if(cmd == "size") {
            d.size();
        }
        else if(cmd == "empty") {
            cout << d.empty() << "\n";
        }
        else if(cmd == "front") {
            d.front();
        }
        else if(cmd == "back") {
            d.back();
        }
    }
}
