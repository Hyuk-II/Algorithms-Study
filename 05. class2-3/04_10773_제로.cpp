// 2024.04.11
// 정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
// 재민이가 최종적으로 적어 낸 수의 합을 출력한다.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int K;
    cin >> K;

    stack<int> s;
    int num;
    for(int i = 0; i < K; i++) {
        cin >> num;
        if(num == 0) {
            s.pop();
        }
        else {
            s.push(num);
        }
        num = 0;
    }
    
    while(!s.empty()) {
        num += s.top();
        s.pop();
    }

    cout << num << "\n";
}
