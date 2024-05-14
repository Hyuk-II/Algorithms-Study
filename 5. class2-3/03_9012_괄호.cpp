// 2024.04.11
// VPS이면 “YES”, 아니면 “NO”를 한 줄에 하나씩 차례대로 출력

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        stack<char> s;
        string str;
        cin >> str;
        int is_VPS = 1;

        for(int j = 0; str[j]; j++) {
            if(str[j] == '(' || str[j] == '[') {
                s.push(str[j]);
            }
            else {
                if(s.empty()) {
                    is_VPS = 0;
                    break;
                }
                else {
                    s.pop();
                }
            }
        }
        if(is_VPS == 1 && s.empty()) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}
