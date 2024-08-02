// 2024.04.29
// 큐 구현

#include <iostream>
#include <string>
using namespace std;

class Queue {
public:
    Queue() {
        for(int i = 0; i < 10001; i++) {
            queue[i] = 0;
        }
        f = 10000;
        r = 10000;
    }
    void push(int num) {
        if(f == (r+1)%10001) {
            cout << "Queue is full\n";
        }
        else {
            r = (r+1)%10001;
            queue[r] = num;
        }
    }
    void pop() {
        if(this->empty()) cout << -1 << "\n";
        else {
            f = (f+1)%10001;
            cout << queue[f] << "\n";
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
        if(f==r) return 1;
        else return 0;
    }
    void front() {
        int first = (f+1)%10001;
        if(this->empty()) {
            cout << -1 << "\n";
        }
        else cout << queue[first] << "\n";
    }
    void back() {
        if(this->empty()) {
            cout << -1 << "\n";
        }
        else cout << queue[r] << "\n";
    }

private:
    int queue[10001];
    int f;
    int r;
};

int main() {
    Queue q;
    int N;
    cin >> N;
    string cmd;

    for(int i = 0; i < N; i++) {
        cin >> cmd;
        if(cmd == "push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if(cmd == "pop") {
            q.pop();
        }
        else if(cmd == "size") {
            q.size();
        }
        else if(cmd == "empty") {
            cout << q.empty() << "\n";
        }
        else if(cmd == "front") {
            q.front();
        }
        else if(cmd == "back") {
            q.back();
        }
    }
}
