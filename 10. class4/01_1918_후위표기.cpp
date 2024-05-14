// 2024.03.25
// 첫째 줄에 후위 표기식으로 바뀐 식을 출력하시오

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    char exp[102];
    stack<char> stack;
    cin.getline(exp, 100);

    for (int i = 0; exp[i]; i++)
    {
        if (exp[i] == ' ' || exp[i] == '\n')
            continue;
        if (exp[i] != '+'&&exp[i] != '-'&&exp[i] != '*'&&exp[i] != '/'&&exp[i] != '('&&exp[i] != ')')
        {
            cout << exp[i];
        }
        else
        {
            if (stack.empty() == 1)
            {
                stack.push(exp[i]);
            }
            else
            {
                if (exp[i] == '+' || exp[i] == '-')
                {
                    if (stack.top() == '(')
                    {
                        stack.push(exp[i]);
                    }
                    else
                    {
                        while (stack.empty() != 1)
                        {
                            if (stack.top() == '(')
                            {
                                break;
                            }
                            cout << stack.top();
                            stack.pop();
                        }
                        stack.push(exp[i]);
                    }
                }
                else if (exp[i] == '*' || exp[i] == '/')
                {
                    if (stack.top() == '(')
                    {
                        stack.push(exp[i]);
                    }
                    else
                    {
                        while (stack.empty() != 1)
                        {
                            if (stack.top() == '(' || stack.top() == '+' || stack.top() == '-')
                            {
                                break;
                            }
                            cout << stack.top();
                            stack.pop();
                        }
                        stack.push(exp[i]);
                    }
                }
                else if (exp[i] == '(')
                    stack.push(exp[i]);
                else if (exp[i] == ')')
                {
                    while (stack.top() != '(')
                    {
                        if(stack.empty() == 1) {
                            break;
                        }
                        cout << stack.top();
                        stack.pop();
                    }
                    stack.pop();
                }
            }
        }
    }
    while (stack.empty() != 1)
    {
        if (stack.top() == '(' || stack.top() == ')')
        {
            stack.pop();
        }
        cout << stack.top();
        stack.pop();
    }
    cout << endl;
}
