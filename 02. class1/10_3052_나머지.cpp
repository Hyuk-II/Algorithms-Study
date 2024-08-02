// 2024.03.18
// 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int mod[42] = {0};
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < 10; i++)
    {
        mod[num[i]%42]++;
    }

    for (int i = 0; i < 42; i++) {
        if(mod[i] != 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
