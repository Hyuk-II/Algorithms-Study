// 2024.04.29
// 스택 구현

#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
    Stack() {
        top_index = -1;
        for(int i = 0; i < 10000; i++) {
            stack[i] = 0;
        }
    }
    void push(int i) {
        stack[++top_index] = i;
    }
    void pop() {
        if(empty()) {
            cout << -1 << "\n";
        }
        else cout << stack[top_index--] << "\n";
    }
    void size() {
        cout << top_index+1 << "\n";
    }
    int empty() {
        if(top_index == -1) {
            return 1;
        }
        else return 0;
    }
    int top() {
        if(empty()) {
            return top_index;
        }
        else return stack[top_index];
    }
private:
    int stack[10000];
    int top_index;
};

int main() {
    Stack s;
    int N;
    cin >> N;
    string cmd;

    for(int i = 0; i < N; i++) {
        cin >> cmd;
        if(cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        }
        else if(cmd == "pop") {
            s.pop();
        }
        else if(cmd == "size") {
            s.size();
        }
        else if(cmd == "empty") {
            cout << s.empty() << "\n";
        }
        else if(cmd == "top") {
            cout << s.top() << "\n";
        }
    }
}
