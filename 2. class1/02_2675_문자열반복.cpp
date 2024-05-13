// 2024.03.14
// 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오

#include <iostream>
using namespace std;

int main()
{
    int T, R;
    char S[21];
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> R >> S;

        for (int i = 0; S[i]; i++)
        {
            for (int j = 0; j < R; j++)
            {
                cout << S[i];
            }
        }
        cout << "\n";
    }

    return 0;
}
