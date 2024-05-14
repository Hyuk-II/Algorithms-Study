// 2024.04.09
// 대괄호 소괄호 짝이 맞았는지 확인

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);

    while (1) {
        stack<char> s;
        string str;
        int isBalanced = 1;
        getline(cin, str);
        if(str[0] == '.') break;

        for(int i = 0; str[i]; i++) {
            if(str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            }
            else if(str[i] == ')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    isBalanced = 0;
                    break;
                }
            }
            else if(str[i] == ']') {
                if(!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    isBalanced = 0;
                    break;
                }
            }
        }

        if(s.empty() && isBalanced) {
            cout << "yes\n";
        }
        else cout << "no\n";
    }
}
