// 2024.08.30

#include <iostream>
#include <vector>
using namespace std;

class stack {
  public:
    int top;
    stack() { top = -1; }

    void push(int n) { list[++top] = n; }
    void pop() { top--; }
    int getTop() { return list[top]; }

  private:
    int list[100000];
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int *num;
    num = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    stack s;
    int push = 1;

    vector<char> cal;

    s.push(push++);
    cal.push_back('+');

    for (int i = 0; i < n; i++) {
        while (s.getTop() < num[i]) {
            s.push(push++);
            cal.push_back('+');
        }

        if (s.getTop() == num[i]) {
            s.pop();
            cal.push_back('-');
        } else {
            cout << "NO" << '\n';
            return 0;
        }
    }

    for (int i = 0; cal[i]; i++) {
        cout << cal[i] << '\n';
    }

    delete[] num;
}