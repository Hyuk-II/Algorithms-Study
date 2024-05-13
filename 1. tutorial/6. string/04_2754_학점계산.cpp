// 2024.03.13
// 어떤 사람의 C언어 성적이 주어졌을 때, 평점은 몇 점인지 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    char str[3];
    cin >> str;

    switch (str[0])
    {
    case 'A':
        if (str[1] == '+')
        {
            cout << 4.3 << endl;
        }
        else if (str[1] == '0')
        {
            cout << "4.0" << endl;
        }
        else
        {
            cout << 3.7 << endl;
        }
        break;

    case 'B':
        if (str[1] == '+')
        {
            cout << 3.3 << endl;
        }
        else if (str[1] == '0')
        {
            cout << "3.0" << endl;
        }
        else
        {
            cout << 2.7 << endl;
        }
        break;

    case 'C':
        if (str[1] == '+')
        {
            cout << 2.3 << endl;
        }
        else if (str[1] == '0')
        {
            cout << "2.0" << endl;
        }
        else
        {
            cout << 1.7 << endl;
        }
        break;

    case 'D':
        if (str[1] == '+')
        {
            cout << 1.3 << endl;
        }
        else if (str[1] == '0')
        {
            cout << "1.0" << endl;
        }
        else
        {
            cout << 0.7 << endl;
        }
        break;

    case 'F':
        cout << "0.0" << endl;
        break;

    default:
        break;
    }

    return 0;
}
